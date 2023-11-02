using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DetectBullets : MonoBehaviour
{
    [Tooltip("Particle system for obstacle explosion")]
    [SerializeField] ParticleSystem explosion;

    private void OnParticleCollision(GameObject other)
    {
        if (other.CompareTag("Obstacle"))
        {
            Instantiate(explosion, other.transform.position, Quaternion.identity);
            Destroy(other);
        }
    }
}