using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DetectBullets : MonoBehaviour
{
    [Tooltip("Particle system for obstacle explosion")]
    [SerializeField] ParticleSystem explosion;

//gameMode Variables
    GameModeController gameMode;
    string canShoot;
    bool hasBullets;

     void Start()
    {
        gameMode = FindObjectOfType<GameModeController>();
        hasBullets = gameMode.CurrentGameMode.GetPlayerHasBullets();
        
        if (hasBullets)
        {
            WhatCanPlayerShoot();
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

            if (other.CompareTag(canShoot))
            {
                Instantiate(explosion, other.transform.position, Quaternion.identity);
                Destroy(other);
            }
        }
        return;
    }

    void WhatCanPlayerShoot()
    {
        switch (gameMode.CurrentGameMode.GetPlayerCanShoot())
        {
            case 1:
                canShoot = "Obstacle";
                Debug.Log("player can shoot: " + canShoot);
                break;

            case 2:
                canShoot = "Car";
                Debug.Log("player can shoot: " + canShoot);
                break;

            case 3:
                canShoot = "All";
                Debug.Log("player can shoot: " + canShoot);
                break;

            default:
                canShoot = null;
                Debug.Log("Player cannot shoot anything");
                break;
        }
    }
}