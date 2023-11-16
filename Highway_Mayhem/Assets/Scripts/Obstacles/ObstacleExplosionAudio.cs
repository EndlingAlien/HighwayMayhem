using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleExplosionAudio : MonoBehaviour
{
    [SerializeField] AudioClip[] explosionClips;
    AudioSource explosionAudioSource;

    void Start()
    {
        explosionAudioSource = GetComponent<AudioSource>();

        if (explosionClips != null && explosionClips.Length > 0)
        {
            int audioPick = Random.Range(0, explosionClips.Length);
            explosionAudioSource.clip = explosionClips[audioPick];
             explosionAudioSource.Play(); // Play the chosen audio clip
        }
        else
        {
            Debug.LogWarning("No audio clips assigned to the array.");
        }
    }
}
