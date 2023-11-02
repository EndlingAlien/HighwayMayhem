using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine;

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
    [Space(10)]

    [Header("Speed Variables")]
    [Tooltip("Speed of tank moving on x-axis")]
    [SerializeField] float playerSpeed = 8.5f;
    [Tooltip("Speed of turret rotation")]
    [SerializeField] float lookSpeed = 32f;
    [Space(10)]

    [Header("Rotation Variable")]
    [Tooltip("Speed of tank rotation when on x-axis")]
    [SerializeField] float rotationFactor = 2.5f;

    //Turret Rotation clamp
    float currentRotation;
    float minRot = -40;
    float maxRot = 40;
    //X-Axis Movement Clamp
    float minX = -8.0f;
    float maxX = 23.0f;
    //input variables
    Vector2 moveInput;
    Vector2 lookInput;
    bool fireInput;
    //Death Handler variables
    DeathHandler deathHandler;
    bool playerAlive;
    #endregion

    void Start()
    {
        deathHandler = FindObjectOfType<DeathHandler>();
    }

    void Update()
    {
        playerAlive = deathHandler.IsPlayerAlive;

        if (playerAlive)
        {
            MoveTurret();
            MoveTank();

            if (fireInput)
            {
                PlayTurretFlash();
            }
        }
    }

    #region Turret Control Methods
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

    void ShootTurret(bool canShoot)
    {
        var bulletEmission = bulletParticles.GetComponent<ParticleSystem>().emission;

        if (canShoot)
        {
            bulletEmission.enabled = true;
        }
        else if (!canShoot)
        {
            bulletEmission.enabled = false;
        }
    }

    void PlayTurretFlash()
    {
        turretFlash.Play();
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

    void ProcessRotation(float rotation)
    {
        Quaternion targetRotation = Quaternion.Euler(0, rotation, 0);
        transform.localRotation = Quaternion.RotateTowards(transform.localRotation, targetRotation, rotationFactor);
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
        fireInput = value.isPressed;

        if (playerAlive)
        {
            ShootTurret(fireInput);
        }
    }
    #endregion

}
