using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DetectBullets : MonoBehaviour
{

private void OnParticleCollision(GameObject other) {
    if(other.gameObject.CompareTag("Obstacle"))
    {
        //play explosion
        Destroy(other);
    }
}
}
