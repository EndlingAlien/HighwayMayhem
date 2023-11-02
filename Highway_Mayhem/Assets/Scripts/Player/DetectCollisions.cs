using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DetectCollisions : MonoBehaviour
{
    [Tooltip("Explosion attached to player")]
    [SerializeField] ParticleSystem explosion;
    DeathHandler deathHandler;

    void Start()
    {
        deathHandler = FindObjectOfType<DeathHandler>();
    }

    void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.tag == "Obstacle")
        {
            explosion.Play();
            Destroy(other.gameObject);
            deathHandler.ActivateGameOver();
        }
        else if (other.gameObject.CompareTag("Car"))
        {
            explosion.Play();
            Destroy(other.gameObject);
            deathHandler.ActivateGameOver();
        }
    }

}
