using UnityEngine;

public class CarAudio : MonoBehaviour
{
    [SerializeField] AudioClip[] carAudioClips;
    AudioSource carAudioSource;

    void Start()
    {
        carAudioSource = GetComponent<AudioSource>();

        if (carAudioClips != null && carAudioClips.Length > 0)
        {
            int audioPick = Random.Range(0, carAudioClips.Length);
            carAudioSource.clip = carAudioClips[audioPick];
             carAudioSource.Play(); // Play the chosen audio clip
        }
        else
        {
            Debug.LogWarning("No audio clips assigned to the array.");
        }
    }
}