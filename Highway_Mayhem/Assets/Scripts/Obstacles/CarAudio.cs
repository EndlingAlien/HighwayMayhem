using UnityEngine;

public class CarAudio : MonoBehaviour
{
    // Array of audio clips for the car
    [SerializeField] AudioClip[] carAudioClips;

    // AudioSource component for playing car audio
    AudioSource carAudioSource;

    // Reference to the SettingsData script for sound settings
    SettingsData settingsData;

    void Start()
    {
        // Get the AudioSource component attached to the car
        carAudioSource = GetComponent<AudioSource>();

        // Find the SettingsData script in the scene
        settingsData = FindObjectOfType<SettingsData>();

        // Check if sound effects are enabled in the settings
        if (settingsData.SoundFxBool)
        {
            // Check if audio clips are assigned to the array
            if (carAudioClips != null && carAudioClips.Length > 0)
            {
                // Randomly choose an audio clip from the array
                int audioPick = Random.Range(0, carAudioClips.Length);

                // Set the chosen audio clip and play it
                carAudioSource.clip = carAudioClips[audioPick];
                carAudioSource.Play();
            }
            else
            {
                // Log a warning if no audio clips are assigned to the array
                Debug.LogWarning("No audio clips assigned to the array.");
            }
        }
    }
}