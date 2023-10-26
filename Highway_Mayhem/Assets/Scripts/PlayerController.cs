using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    [SerializeField] float playerSpeed = 5f;
    [SerializeField] float lookSpeed = 5f;
    [SerializeField] float rotationFactor = 1;
    [SerializeField] Transform tankTurret;
    float currentRotation;
    float minRotation = -40;
    float maxRotation = 40;

    Vector2 moveInput;
    Vector2 lookInput;

    void Update()
    {
        MoveTurret();
        MoveTank();
    }

    void ShootTurret()
    {
        Debug.Log("shot fired");
        //raycast?? and particle systems to indicate shot fired
    }

    #region Turret Control Methods
        void MoveTurret()
        {
            float newRotation = currentRotation + lookInput.x * lookSpeed * Time.deltaTime;
            SetCurrentRotation(newRotation);
        }
    
        void SetCurrentRotation(float rot)
        {
            currentRotation = Mathf.Clamp(rot, minRotation, maxRotation);
            tankTurret.transform.rotation = Quaternion.Euler(0, rot, 0);
        }
    #endregion

    #region Tank Control Methods
    void MoveTank()
    {
        Vector2 movement = ProcessMovement();

        if (movement.x < 0)
        {
            ProcessRotation(-10);
            ProcessMovement();
        }
        else if (movement.x > 0)
        {
            ProcessRotation(10);
            ProcessMovement();
        }
        else if (movement.x == 0)
        {
            ProcessRotation(0);
            ProcessMovement();
        }
    }

    void ProcessRotation(float rotation)
    {
        Quaternion targetRotation = Quaternion.Euler(0, rotation, 0);
        transform.localRotation = Quaternion.RotateTowards(transform.localRotation, targetRotation, rotationFactor);
    }

    Vector2 ProcessMovement()
    {
        Vector2 movement = new Vector2(moveInput.x * playerSpeed * Time.deltaTime, 0);

        Vector3 newPosition = transform.position + new Vector3(movement.x, 0, 0);
        transform.position = newPosition;
        return movement;
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
        ShootTurret();
    }
    #endregion

}
