using UnityEngine;

public class DetectBullets : MonoBehaviour
{
    #region Variables

    // Particle system for obstacle explosion
    [Tooltip("Particle system for obstacle explosion")]
    [SerializeField] ParticleSystem explosion;

    // UI Image for displaying points
    [SerializeField] UnityEngine.UI.Image pointImage;

    // Array of sprites for different point values
    [SerializeField] Sprite[] pointSprites;

    // Animator for the point image
    Animator pointImageAnimator;

    // GameMode
    GameModeController gameMode;
    string canShoot;
    bool hasBullets;

    // ScoreKeeper
    ScoreKeeper scorekeeper;
    int pointvalue;

    #endregion

    void Start()
    {
        // Get references and initialize variables
        gameMode = FindObjectOfType<GameModeController>();
        scorekeeper = FindObjectOfType<ScoreKeeper>();
        pointImageAnimator = pointImage.GetComponent<Animator>();
        hasBullets = gameMode.CurrentGameMode.GetPlayerHasBullets();

        pointvalue = 0;

        // Check if the player has bullets and determine what the player can shoot
        if (hasBullets)
        {
            WhatCanPlayerShoot();
        }
    }

    void WhatCanPlayerShoot()
    {
        // Determine what the player can shoot based on the game mode
        switch (gameMode.CurrentGameMode.GetPlayerCanShoot())
        {
            case 1:
                canShoot = "Obstacle";
                pointvalue = 200;
                pointImage.sprite = pointSprites[0];
                break;

            case 2:
                canShoot = "Car";
                pointvalue = 400;
                pointImage.sprite = pointSprites[2];
                break;

            case 3:
                canShoot = "All";
                pointvalue = 300;
                pointImage.sprite = pointSprites[1];
                break;

            default:
                canShoot = "Obstacle";
                break;
        }
    }

    void OnParticleCollision(GameObject other)
    {
        // Check if the player has bullets
        if (hasBullets)
        {
            // Check what the player can shoot based on the game mode
            if (canShoot == "All")
            {
                // If the player can shoot all, destroy obstacles and cars on collision
                if (other.CompareTag("Obstacle") || other.CompareTag("Car"))
                {
                    Instantiate(explosion, other.transform.position, Quaternion.identity);
                    Destroy(other);
                    pointImageAnimator.SetTrigger("AddPointValue");
                    scorekeeper.UpdateScore(pointvalue);
                }
            }
            else if (other.CompareTag(canShoot))
            {
                // If the player can shoot a specific type, destroy the corresponding object on collision
                Instantiate(explosion, other.transform.position, Quaternion.identity);
                Destroy(other.gameObject);
                pointImageAnimator.SetTrigger("AddPointValue");
                scorekeeper.UpdateScore(pointvalue);
            }
        }
    }

    // Event trigger for resetting the point animation
    void ResetPointTrigger()
    {
        pointImageAnimator.ResetTrigger("AddPointValue");
    }
}