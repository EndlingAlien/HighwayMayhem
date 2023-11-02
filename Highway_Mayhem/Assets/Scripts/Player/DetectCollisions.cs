using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DetectCollisions : MonoBehaviour
{
    [Tooltip("Explosion attached to player")]
    [SerializeField] ParticleSystem explosion;

    DeathHandler deathHandler;
    //GameMode variables
    GameModeController gameMode;
    float playerHealth;
    bool hasHealth;

    void Start()
    {
        deathHandler = FindObjectOfType<DeathHandler>();
        gameMode = FindObjectOfType<GameModeController>();
        hasHealth = gameMode.CurrentGameMode.GetPlayerHasHealth();

        if (hasHealth)
        {
            playerHealth = gameMode.CurrentGameMode.GetPlayerHealth();
        }
    }

    void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.tag == "Obstacle")
        {
            explosion.Play();
            Destroy(other.gameObject);
            if (hasHealth)
            {
                playerHealth--;
                if (playerHealth <= 0)
                {
                    deathHandler.ActivateGameOver();
                }
            }
            else
            {
                deathHandler.ActivateGameOver();
            }
        }

        else if (other.gameObject.CompareTag("Car"))
        {
            explosion.Play();
            Destroy(other.gameObject);
            if (hasHealth)
            {
                playerHealth -= 2;
                if (playerHealth <= 0)
                {
                    deathHandler.ActivateGameOver();
                }
            }
            else
            {
                deathHandler.ActivateGameOver();
            }
        }
    }

}
