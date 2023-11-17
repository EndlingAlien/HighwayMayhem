using UnityEngine;

public class ObstacleExplosionAudio : MonoBehaviour
{
    // Array of audio clips for the explosion
    [SerializeField] AudioClip[] explosionClips;

    // AudioSource component for playing the explosion audio
    AudioSource explosionAudioSource;

    // Reference to the SettingsData script for sound settings
    SettingsData settingsData;

    // Called when the object is initialized
    void Start()
    {
        // Get the AudioSource component attached to the obstacle
        explosionAudioSource = GetComponent<AudioSource>();

        // Find the SettingsData script in the scene
        settingsData = FindObjectOfType<SettingsData>();

        // Check if sound effects are enabled in the settings
        if (settingsData.SoundFxBool)
        {
            // Check if explosion clips are assigned to the array
            if (explosionClips != null && explosionClips.Length > 0)
            {
                // Randomly choose an explosion audio clip from the array
                int audioPick = Random.Range(0, explosionClips.Length);

                // Set the chosen explosion audio clip and play it
                explosionAudioSource.clip = explosionClips[audioPick];
                explosionAudioSource.Play();
            }
            else
            {
                // Log a warning if no explosion audio clips are assigned to the array
                Debug.LogWarning("No audio clips assigned to the array.");
            }
        }
    }
}