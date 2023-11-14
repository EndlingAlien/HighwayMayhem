using System.Collections;
using UnityEngine.InputSystem;
using UnityEngine;
using Vector2 = UnityEngine.Vector2;
using Vector3 = UnityEngine.Vector3;
using Quaternion = UnityEngine.Quaternion;
using UnityEngine.Experimental.GlobalIllumination;

public class PlayerController : MonoBehaviour
{
    #region Variables

    [Header("Player Config")]
    [Tooltip("Turret gameobject refrence")]
    [SerializeField] Transform tankTurret;
    [Tooltip("Bullet Particle System refrence")]
    [SerializeField] ParticleSystem bulletParticles;
    [Tooltip("Particle system for the muzzle flash on turret")]
    [SerializeField] ParticleSystem turretFlash;
    [Tooltip("Indicator for where bullets hit")]
    [SerializeField] GameObject bulletIndicator;
    [SerializeField] GameObject headlight;
    [SerializeField] GameObject indicatorLight;

    //Gamemode
    GameModeController gameMode;
    float playerSpeed;
    float lookSpeed;
    bool hasBullets;
    float bulletSpeed;
    bool hasNewScale;
    float newScale;

    //TinyToMighty
    float startTime;
    bool hasStartedScaling;

    //Death Handler
    DeathHandler deathHandler;
    bool playerAlive;

    //Cooldown
    UIController uiScript;
    bool hasCooldown;
    float cooldownTime;
    float cooldownDelay = 5f;

    //Turret Rotation
    float currentRotation;
    float minRot = -40;
    float maxRot = 40;

    //Tank Movement
    float minX = -8.0f;
    float maxX = 23.0f;
    float rotationFactor = 2.5f;

    //Input
    Vector2 moveInput;
    Vector2 lookInput;
    bool isFiring;
    float fireInput;

    ModePersist modePersist;

    #endregion

    void Start()
    {
        hasCooldown = false;

        deathHandler = FindObjectOfType<DeathHandler>();
        gameMode = FindObjectOfType<GameModeController>();
        uiScript = FindObjectOfType<UIController>();
        modePersist = FindObjectOfType<ModePersist>();

        ConfigureGameModeVariables();
        CheckIfNewScale();

        uiScript.DisplayBulletCooldown(cooldownTime);

        startTime = Time.time;
        hasStartedScaling = false;
        headlight.SetActive(false);
        indicatorLight.SetActive(false);

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

    #region GameMode Config Methods

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

    #endregion

    void Update()
    {
        playerAlive = deathHandler.IsPlayerAlive;

        if (playerAlive)
        {
            MoveTank();
            if (gameMode.CurrentGameMode.GetName() == "TinyToMighty")
            {
                TinyToMightyScale();
            }

            if (hasBullets)
            {
                ProcessShootingAndCooldown();

                if (cooldownTime <= 0)
                {
                    StartCoroutine(BulletCooldown());
                }
            }
        }
    }

    #region Turret Control Methods

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

    void MoveTurret()
    {
        float newRotation = currentRotation + lookInput.x * lookSpeed * Time.deltaTime;
        SetCurrentRotation(newRotation);
    }

    void SetCurrentRotation(float rot)
    {
        currentRotation = Mathf.Clamp(rot, minRot, maxRot);
        tankTurret.transform.rotation = Quaternion.Euler(0, rot, 0);
    }

    void ShootTurret()
    {
        var bulletEmission = bulletParticles.GetComponent<ParticleSystem>().emission;
        bulletEmission.rateOverTime = bulletSpeed;

        if (isFiring && !hasCooldown)
        {
            bulletEmission.enabled = true;
        }
        else if (!isFiring)
        {
            bulletEmission.enabled = false;
        }
    }

    void PlayTurretFlash()
    {
        turretFlash.Play();
    }

    IEnumerator BulletCooldown()
    {
        hasCooldown = true;
        fireInput = 0;
        isFiring = false;
        yield return new WaitForSeconds(cooldownDelay);
        hasCooldown = false;
        cooldownTime = gameMode.CurrentGameMode.GetCooldownAmount();
        uiScript.DisplayBulletCooldown(cooldownTime);
    }

    public void StopAllBullets()
    {
        fireInput = 0;
        isFiring = false;
        bulletSpeed = 0;
        bulletParticles.Stop();
    }

    #endregion

    #region Tank Control Methods

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

    void ProcessRotation(float rotation)
    {
        Quaternion targetRotation = Quaternion.Euler(0, rotation, 0);
        transform.localRotation = Quaternion.RotateTowards(transform.localRotation, targetRotation, rotationFactor);
    }

    #endregion

    #region Input methods

    void OnMove(InputValue value)
    {
        moveInput = value.Get<Vector2>();
    }

    void OnLook(InputValue value)
    {
        lookInput = value.Get<Vector2>();
    }

    void OnFire(InputValue value)
    {
        fireInput = value.Get<float>();

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