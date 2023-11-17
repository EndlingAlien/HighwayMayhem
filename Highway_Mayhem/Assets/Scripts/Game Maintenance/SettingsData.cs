using UnityEngine;

public class SettingsData : MonoBehaviour
{
    #region Variables

    // Singleton instance
    public static SettingsData Instance;

    // Reference to the music player AudioSource
    AudioSource musicPlayer;

    // Settings variables
    bool soundFxBool;
    bool musicBool;
    float musicVolume;

    // Properties to access settings variables
    public bool SoundFxBool
    {
        get { return soundFxBool; }
        set { soundFxBool = value; }
    }

    public bool MusicBool
    {
        get { return musicBool; }
        set { musicBool = value; }
    }

    public float MusicVolume
    {
        get { return musicVolume; }
        set { musicVolume = value; }
    }

    // Keys for PlayerPrefs
    const string soundFxBoolKey = "SoundFxBool";
    const string musicBoolKey = "MusicBool";
    const string musicVolumeKey = "MusicVolume";

    #endregion

    void Awake()
    {
        // Initialize singleton and load settings on Awake
        musicPlayer = GetComponent<AudioSource>();
        InitializeSingleton();
        LoadSettingsData();
    }

    private void Update()
    {
        // Update music player settings during runtime
        musicPlayer.enabled = musicBool;
        musicPlayer.volume = musicVolume;
    }

    void InitializeSingleton()
    {
        // Set up the singleton pattern
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void LoadSettingsData()
    {
        // Load bool values as integers and convert them back
        if (PlayerPrefs.HasKey(soundFxBoolKey))
        {
            soundFxBool = PlayerPrefs.GetInt(soundFxBoolKey) == 1;
        }

        if (PlayerPrefs.HasKey(musicBoolKey))
        {
            musicBool = PlayerPrefs.GetInt(musicBoolKey) == 1;
        }

        // Load float value directly
        if (PlayerPrefs.HasKey(musicVolumeKey))
        {
            musicVolume = PlayerPrefs.GetFloat(musicVolumeKey);
        }
    }

    public void SaveSettingsData()
    {
        // Save bool values as integers (0 for false, 1 for true)
        PlayerPrefs.SetInt(soundFxBoolKey, soundFxBool ? 1 : 0);
        PlayerPrefs.SetInt(musicBoolKey, musicBool ? 1 : 0);

        // Save float value directly
        PlayerPrefs.SetFloat(musicVolumeKey, musicVolume);

        // Save the PlayerPrefs
        PlayerPrefs.Save();
    }
}