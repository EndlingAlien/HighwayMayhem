using System.Collections;
using UnityEngine.InputSystem;
using UnityEngine;
using Vector2 = UnityEngine.Vector2;
using Vector3 = UnityEngine.Vector3;
using Quaternion = UnityEngine.Quaternion;

public class PlayerController : MonoBehaviour
{
    #region Variables

    // Variables for player configuration
    [Header("Player Config")]
    [Tooltip("Turret gameobject reference")]
    [SerializeField] Transform tankTurret;
    [Tooltip("Bullet Particle System reference")]
    [SerializeField] ParticleSystem bulletParticles;
    [Tooltip("Particle system for the muzzle flash on turret")]
    [SerializeField] ParticleSystem turretFlash;
    [Tooltip("Indicator for where bullets hit")]
    [SerializeField] GameObject bulletIndicator;
    [Tooltip("Smoke Particle System for when cooldown is activated")]
    [SerializeField] ParticleSystem cooldownSmoke;

    // Variables for Night Mode configuration
    [Header("Night Mode Config")]
    [Tooltip("Headlights for player")]
    [SerializeField] GameObject headlight;
    [Tooltip("Light for Bullet Indicator")]
    [SerializeField] GameObject indicatorLight;

    // Audio sources for various player actions
    [Header("Audio Sources")]
    [Tooltip("Audio source for the tank")]
    [SerializeField] AudioSource tankAudio;
    [Tooltip("Audio source for when the player is shooting bullets")]
    [SerializeField] AudioSource bulletAudio;
    [Tooltip("Audio source for when the turret head is rotating left and right")]
    [SerializeField] AudioSource turretRotatingAudio;
    [Tooltip("Audio source for when the cooldown becomes active")]
    [SerializeField] AudioSource cooldownAudio;

    // Game mode variables
    GameModeController gameMode;
    float playerSpeed;
    float lookSpeed;
    bool hasBullets;
    float bulletSpeed;
    bool hasNewScale;
    float newScale;

    // Variables for TinyToMighty scaling
    float startTime;
    bool hasStartedScaling;

    // Death Handler variables
    DeathHandler deathHandler;
    bool playerAlive;

    // Cooldown variables
    UIController uiScript;
    bool hasCooldown;
    ParticleSystem.EmissionModule bulletEmission;
    float cooldownTime;
    float cooldownDelay = 5f;

    // Turret Rotation variables
    float currentRotation;
    float minRot = -40;
    float maxRot = 40;

    // Tank Movement variables
    float minX = -8.0f;
    float maxX = 23.0f;
    float rotationFactor = 2.5f;

    // Input variables
    Vector2 moveInput;
    Vector2 lookInput;
    bool isFiring;
    float fireInput;

    ModePersist modePersist;
    SettingsData settingsData;

    #endregion

    // Start is called before the first frame update
    void Start()
    {
        // Initialize variables and components
        hasCooldown = false;
        bulletEmission = bulletParticles.GetComponent<ParticleSystem>().emission;

        FindScripts();
        ConfigureGameModeVariables();
        CheckIfNewScale();

        uiScript.DisplayBulletCooldown(cooldownTime);

        startTime = Time.time;
        hasStartedScaling = false;
        headlight.SetActive(false);
        indicatorLight.SetActive(false);

        ProcessLightsAndIndicator();
    }

    #region Public methods

    // Stop all audio sources
    public void StopAudio()
    {
        bulletAudio.enabled = false;
        turretRotatingAudio.enabled = false;
        tankAudio.enabled = false;
        cooldownAudio.Stop();
    }

    // Stop all bullet-related actions
    public void StopAllBullets()
    {
        fireInput = 0;
        isFiring = false;
        bulletSpeed = 0;
        bulletEmission.enabled = false;
        bulletParticles.Stop();
    }

    #endregion

    #region Start Config Methods

    // Find necessary scripts in the scene
    void FindScripts()
    {
        deathHandler = FindObjectOfType<DeathHandler>();
        gameMode = FindObjectOfType<GameModeController>();
        uiScript = FindObjectOfType<UIController>();
        modePersist = FindObjectOfType<ModePersist>();
        settingsData = FindObjectOfType<SettingsData>();
    }

    // Configure variables based on the current game mode
    void ConfigureGameModeVariables()
    {
        playerSpeed = gameMode.CurrentGameMode.GetPlayerSpeed();
        lookSpeed = gameMode.CurrentGameMode.GetTurretSpeed();

        hasBullets = gameMode.CurrentGameMode.GetPlayerHasBullets();
        bulletSpeed = gameMode.CurrentGameMode.GetBulletSpeed();
        cooldownTime = gameMode.CurrentGameMode.GetCooldownAmount();
        cooldownDelay = gameMode.CurrentGameMode.GetCooldownDelay();

        hasNewScale = gameMode.CurrentGameMode.GetPlayerHasNewScale();
        newScale = gameMode.CurrentGameMode.GetPlayerScale();
    }

    // Check if the player should have a new scale and apply it
    void CheckIfNewScale()
    {
        if (hasNewScale && gameMode.CurrentGameMode.GetName() == "TinyToMighty")
        {
            transform.localScale = new Vector3(0.4f, 0.4f, 0.4f);
            hasStartedScaling = true;
        }
        else if (hasNewScale)
        {
            transform.localScale = new Vector3(newScale, newScale, newScale);
        }
    }

    // Process lights and indicators based on the chosen level and game mode
    void ProcessLightsAndIndicator()
    {
        if (modePersist.ChosenLevel == "Night")
        {
            headlight.SetActive(true);
            if (hasBullets)
            {
                indicatorLight.SetActive(true);
            }
        }

        if (hasBullets)
        {
            bulletIndicator.SetActive(true);
        }
        else
        {
            bulletIndicator.SetActive(false);
        }
    }

    #endregion

    // Update is called once per frame
    void Update()
    {
        // Check if the player is alive and update actions accordingly
        playerAlive = deathHandler.IsPlayerAlive;

        // Toggle tank audio based on settings
        if (settingsData.SoundFxBool)
        {
            tankAudio.enabled = true;
        }
        else
        {
            tankAudio.enabled = false;
        }

        if (playerAlive)
        {
            // Move the tank and apply game mode-specific actions
            MoveTank();
            if (gameMode.CurrentGameMode.GetName() == "TinyToMighty")
            {
                TinyToMightyScale();
            }

            if (hasBullets)
            {
                // Process shooting and cooldown for the turret
                ProcessShootingAndCooldown();

                if (cooldownTime <= 0)
                {
                    StartCoroutine(BulletCooldown());
                }
            }
        }
    }

    // Scale the player character from tiny to mighty over a specified duration
    void TinyToMightyScale()
    {
        Vector3 startScale = new Vector3(0.4f, 0.4f, 0.4f);
        Vector3 finishScale = new Vector3(3.5f, 3.5f, 3.5f);
        float scaleDuration = 240;

        float elapsedTime = Time.time - startTime;

        if (elapsedTime < scaleDuration)
        {
            float t = elapsedTime / scaleDuration;
            Vector3 growScale = Vector3.Lerp(startScale, finishScale, t);
            transform.localScale = growScale;
        }
        else
        {
            transform.localScale = finishScale;
        }
    }

    #region Turret Control Methods

    // Process shooting and cooldown for the turret
    void ProcessShootingAndCooldown()
    {
        MoveTurret();
        ShootTurret();

        if (isFiring && !hasCooldown)
        {
            PlayTurretFlash();
            cooldownTime -= Time.deltaTime;
            uiScript.DisplayBulletCooldown(cooldownTime);
        }
        else
        {
            if (cooldownTime != gameMode.CurrentGameMode.GetCooldownAmount())
            {
                cooldownTime += Time.deltaTime;
                uiScript.DisplayBulletCooldown(cooldownTime);
            }
        }
    }

    // Move the turret based on player input
    void MoveTurret()
    {
        float newRotation = currentRotation + lookInput.x * lookSpeed * Time.deltaTime;
        SetCurrentRotation(newRotation);

        // Toggle turret rotating audio based on input and settings
        if (settingsData.SoundFxBool)
        {
            if (lookInput.magnitude > 0)
            {
                if (!turretRotatingAudio.isPlaying)
                {
                    turretRotatingAudio.enabled = true;
                }
            }
            else
            {
                turretRotatingAudio.enabled = false;
            }
        }
    }

    // Set the current rotation of the turret within specified limits
    void SetCurrentRotation(float rot)
    {
        currentRotation = Mathf.Clamp(rot, minRot, maxRot);
        tankTurret.transform.rotation = Quaternion.Euler(0, rot, 0);
    }

    // Manage shooting behavior for the turret
    void ShootTurret()
    {
        bulletEmission.rateOverTime = bulletSpeed;

        if (isFiring && !hasCooldown)
        {
            bulletEmission.enabled = true;
            if (settingsData.SoundFxBool)
            {
                bulletAudio.enabled = true;
            }
        }
        else if (!isFiring)
        {
            bulletAudio.enabled = false;
            bulletEmission.enabled = false;
        }
    }

    // Trigger the turret flash particle system when shooting
    void PlayTurretFlash()
    {
        turretFlash.Play();
    }

    // Coroutine for handling the cooldown period after shooting
    IEnumerator BulletCooldown()
    {
        var smokeEmission = cooldownSmoke.GetComponent<ParticleSystem>().emission;

        hasCooldown = true;
        smokeEmission.enabled = true;
        fireInput = 0;
        isFiring = false;
        if (settingsData.SoundFxBool)
        {
            cooldownAudio.Play();
        }

        yield return new WaitForSeconds(cooldownDelay);

        hasCooldown = false;
        cooldownAudio.Stop();
        smokeEmission.enabled = false;
        cooldownTime = gameMode.CurrentGameMode.GetCooldownAmount();
        uiScript.DisplayBulletCooldown(cooldownTime);
    }

    #endregion

    #region Tank Control Methods

    // Move the tank based on player input
    void MoveTank()
    {
        Vector2 movement = ProcessMovement();

        if (movement.x < 0)
        {
            ProcessRotation(-10);
        }
        else if (movement.x > 0)
        {
            ProcessRotation(10);
        }
        else if (movement.x == 0)
        {
            ProcessRotation(0);
        }
    }

    // Process tank movement based on player input
    Vector2 ProcessMovement()
    {
        float movementX = moveInput.x * playerSpeed * Time.deltaTime;
        float currentX = transform.position.x;

        float newX = currentX + movementX;

        if (newX >= minX && newX <= maxX)
        {
            Vector3 newPosition = new Vector3(newX, transform.position.y, transform.position.z);
            transform.position = newPosition;
        }
        return new Vector2(newX - currentX, 0);
    }

    // Process tank rotation based on the provided rotation value
    void ProcessRotation(float rotation)
    {
        Quaternion targetRotation = Quaternion.Euler(0, rotation, 0);
        transform.localRotation = Quaternion.RotateTowards(transform.localRotation, targetRotation, rotationFactor);
    }

    #endregion

    #region Input methods

    // Handle player movement input
    void OnMove(InputValue value)
    {
        moveInput = value.Get<Vector2>();
    }

    // Handle player turret rotation input
    void OnLook(InputValue value)
    {
        lookInput = value.Get<Vector2>();
    }

    // Handle player firing input
    void OnFire(InputValue value)
    {
        fireInput = value.Get<float>();

        // Check if there is no cooldown before allowing firing
        if (!hasCooldown)
        {
            if (fireInput == 1)
            {
                isFiring = true;
            }
            else if (fireInput == 0)
            {
                isFiring = false;
            }
        }
        else
        {
            fireInput = 0;
            isFiring = false;
        }
    }

    #endregion
}