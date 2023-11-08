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
    //ScoreKeeper
    ScoreKeeper scorekeeper;
    int pointvalue;

    #endregion

    void Start()
    {
        gameMode = FindObjectOfType<GameModeController>();
        scorekeeper = FindObjectOfType<ScoreKeeper>();
        hasBullets = gameMode.CurrentGameMode.GetPlayerHasBullets();
        pointvalue = 0;

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
                pointvalue = 200;
                break;

            case 2:
                canShoot = "Car";
                pointvalue = 400;
                break;

            case 3:
                canShoot = "All";
                pointvalue = 300;
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
                    scorekeeper.UpdateScore(pointvalue);
                    Destroy(other);
                }
            }
            else if (other.CompareTag(canShoot))
            {
                Instantiate(explosion, other.transform.position, Quaternion.identity);
                Destroy(other.gameObject);
                scorekeeper.UpdateScore(pointvalue);
            }
        }
    }
}