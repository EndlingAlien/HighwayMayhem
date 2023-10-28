using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DetectCollisions : MonoBehaviour
{
    [SerializeField] ParticleSystem explosion;
    private void OnCollisionEnter(Collision other)
    {
        if(other.gameObject.tag == "Obstacle")
        {
            //explosion.Play();
            Destroy(other.gameObject);
            //remove health
        }
        else if (other.gameObject.CompareTag("Car"))
        {
            //explosion.Play();
        }
    }

}
