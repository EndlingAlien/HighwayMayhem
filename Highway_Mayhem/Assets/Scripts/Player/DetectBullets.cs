using UnityEngine;

public class DetectBullets : MonoBehaviour
{
    #region Variables

        [Tooltip("Particle system for obstacle explosion")]
        [SerializeField] ParticleSystem explosion;
    
        //GameMode
        GameModeController gameMode;
        string canShoot;
        bool hasBullets;

    #endregion

    void Start()
    {
        gameMode = FindObjectOfType<GameModeController>();
        hasBullets = gameMode.CurrentGameMode.GetPlayerHasBullets();

        if (hasBullets)
        {
            WhatCanPlayerShoot();
        }
    }

    void WhatCanPlayerShoot()
    {
        switch (gameMode.CurrentGameMode.GetPlayerCanShoot())
        {
            case 1:
                canShoot = "Obstacle";
                break;

            case 2:
                canShoot = "Car";
                break;

            case 3:
                canShoot = "All";
                break;

            default:
                canShoot = null;
                Debug.Log("Player cannot shoot anything");
                break;
        }
    }

    void OnParticleCollision(GameObject other)
    {
        if (hasBullets)
        {
            if (canShoot == "All")
            {
                if (other.CompareTag("Obstacle") || other.CompareTag("Car"))
                {
                    Instantiate(explosion, other.transform.position, Quaternion.identity);
                    Destroy(other);
                }
            }
            else if (other.CompareTag(canShoot))
            {
                Instantiate(explosion, other.transform.position, Quaternion.identity);
                Destroy(other);
            }
        }
        return;
    }
}