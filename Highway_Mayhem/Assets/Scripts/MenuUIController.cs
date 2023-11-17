using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using System.Collections;
using UnityEngine.UI;

public class MenuUIController : MonoBehaviour
{
    #region Variables

    [Header("Text Fields")]
    [Tooltip("UI text element for if the game is unlocked or not")]
    [SerializeField] TextMeshProUGUI gameModeStatusText;
    [Tooltip("UI text element for the required game mode needed to unlock selected one")]
    [SerializeField] TextMeshProUGUI requiredGameModeText;
    [Tooltip("UI text element for the highscore required to unlock selected Game Mode")]
    [SerializeField] TextMeshProUGUI requiredHighscoreText;
    [Tooltip("UI text element for if the player will be able to shoot")]
    [SerializeField] TextMeshProUGUI bulletBoolText;
    [Tooltip("UI text element for what the player will be able to shoot")]
    [SerializeField] TextMeshProUGUI playerCanShootText;
    [Tooltip("UI text element for if the player will have access to health")]
    [SerializeField] TextMeshProUGUI healthBoolText;
    [Tooltip("UI text element for what the previous/current highscore is")]
    [SerializeField] TextMeshProUGUI highscoreText;
    [Space(10)]

    [Header("Dropdowns")]
    [Tooltip("Refrence to the game modes dropdown")]
    [SerializeField] TMP_Dropdown gamemodeDropdown;
    [Tooltip("refrence to the level dropdown")]
    [SerializeField] TMP_Dropdown levelDropdown;
    [Space(10)]

    [Header("Images")]
    [Tooltip("UI element refrence for the game mode image")]
    [SerializeField] Image gameModeImage;
    [Tooltip("UI element refrence for the locked overlay")]
    [SerializeField] GameObject lockedImage;
    [Tooltip("UI element refrence for the level image")]
    [SerializeField] Image levelImage;
    [Tooltip("UI refrence for the warning that displays when player tries to play locked mode")]
    [SerializeField] GameObject warningImage;
    [Space(10)]

    [Header("Settings Variables")]
    [Tooltip("Refrence to the sound FX toggle in Settings Canvas")]
    [SerializeField] Toggle soundFxToggle;
    [Tooltip("Refrence to the background music toggle in Settings Canvas")]
    [SerializeField] Toggle musicToggle;
    [Tooltip("Refrence to the background music volume slider in Settings Canvas")]
    [SerializeField] Slider musicSlider;
    [Space(10)]

    [Header("Audio variables")]
    [Tooltip("Array of possible paper audio clips for Options menus")]
    [SerializeField] AudioClip[] paperAudioClips;
    [Tooltip("Audio clip for button clicking sound")]
    [SerializeField] AudioClip clickAudio;
    [Tooltip("Audio source to play above clips")]
    AudioSource audioSource;
    [Space(10)]

    [Header("Image Array's")]
    [Tooltip("Array of all the different game mode images")]
    [SerializeField] Sprite[] gameModeImages;
    [Tooltip("Array of all the different level images")]
    [SerializeField] Sprite[] levelImages;
    [Space(10)]

    [Header("Game Modes")]
    [Tooltip("Array of all the game mode names")]
    [SerializeField] string[] gameModeNames;
    [Space(10)]

    [Header("Canvases")]
    [Tooltip("List of Canvases in Hierarchy")]
    [SerializeField] GameObject[] canvases;
    [Space(10)]
    
    string chosenMode;
    int selectedLevel;
    bool isGameUnlocked;
    GameModeSO currentGameMode;

    // Scripts
    ModePersist modePersist;
    GameData gameData;
    SettingsData settingsData;

    #endregion

    void Start()
    {
        // Initialize scripts and set default game mode and level
        modePersist = FindObjectOfType<ModePersist>();
        gameData = FindObjectOfType<GameData>();
        settingsData = FindObjectOfType<SettingsData>();
        audioSource = GetComponent<AudioSource>();

        CreateUIListeners();
        CheckForSettingsData();

        // Dropdown defaults
        FindGameMode("Easy");
        modePersist.SetGameMode("Easy");
        selectedLevel = 0;
    }

    #region Start Config Methods

    void CreateUIListeners()
    {
        // Add listeners to UI elements
        gamemodeDropdown.onValueChanged.AddListener(delegate { GameModeValueChanged(gamemodeDropdown); });
        levelDropdown.onValueChanged.AddListener(delegate { LevelValueChanged(levelDropdown); });

        soundFxToggle.onValueChanged.AddListener(delegate { SoundFxValueChanged(soundFxToggle); });
        musicToggle.onValueChanged.AddListener(delegate { MusicToggleValueChanged(musicToggle); });
        musicSlider.onValueChanged.AddListener(delegate { MusicSliderValueChanged(musicSlider); });
    }

    #endregion

    void CheckForSettingsData()
    {
        // Check for existing settings data or create new settings data
        if (settingsData != null)
        {
            settingsData.LoadSettingsData();
            soundFxToggle.isOn = settingsData.SoundFxBool;
            musicToggle.isOn = settingsData.MusicBool;
            musicSlider.value = settingsData.MusicVolume;
        }
        else
        {
            settingsData.SoundFxBool = soundFxToggle.isOn;
            settingsData.MusicBool = musicToggle.isOn;
            settingsData.MusicVolume = musicSlider.value;
        }
    }

    void Update()
    {
        // Handle Escape key to exit the game
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            ExitGame();
        }
    }

    #region Settings UI Listeners

    void SoundFxValueChanged(Toggle change)
    {
        // Update sound FX settings and save to data
        if (settingsData.SoundFxBool != change.isOn)
        {
            settingsData.SoundFxBool = change.isOn;
            settingsData.SaveSettingsData();
        }
    }

    void MusicToggleValueChanged(Toggle change)
    {
        // Update music settings and save to data
        if (settingsData.MusicBool != change.isOn)
        {
            settingsData.MusicBool = change.isOn;
            settingsData.SaveSettingsData();
        }
    }

    void MusicSliderValueChanged(Slider change)
    {
        // Update music volume settings and save to data
        if (settingsData.MusicVolume != change.value)
        {
            settingsData.MusicVolume = change.value;
            settingsData.SaveSettingsData();
        }
    }

    #endregion

    #region GameMode Methods

    void GameModeValueChanged(TMP_Dropdown change)
    {
        // Handle changes in the game mode dropdown
        int selectedValue = gamemodeDropdown.value;

        if (selectedValue >= 0 && selectedValue < gameModeImages.Length)
        {
            gameModeImage.sprite = gameModeImages[selectedValue];

            chosenMode = gameModeNames[selectedValue];
            FindGameMode(chosenMode);
            ConvertModeIntToName(selectedValue);
        }
    }

    void FindGameMode(string chosenMode)
    {
        // Find and set the current game mode based on the chosen mode name
        GameModeSO[] gameModes = Resources.LoadAll<GameModeSO>("GameModes");
        foreach (GameModeSO mode in gameModes)
        {
            if (mode.GetName() == chosenMode)
            {
                currentGameMode = mode;
                CheckIfModesHaveBeenUnlocked(currentGameMode.GetRequiredMode(), currentGameMode.GetName());
                ConfigureMissionDetails();
                return;
            }
        }
        // Fail-safe
        currentGameMode = Resources.Load<GameModeSO>("GameModes/Default");
    }

    void CheckIfModesHaveBeenUnlocked(string modeNeeded, string currentMode)
    {
        // Check if the required modes have been unlocked
        gameData.CanUnlockGamemode(modeNeeded, currentMode);
    }

    void ConfigureMissionDetails()
    {
        // Configure mission details based on the selected game mode
        if (gameData.GetUnlockedGameModes().Contains(currentGameMode))
        {
            isGameUnlocked = true;
        }
        else
        {
            isGameUnlocked = false;
        }

        bool hasHealth = currentGameMode.GetPlayerHasHealth();
        bool hasBullets = currentGameMode.GetPlayerHasBullets();
        int? score = gameData.CheckHighscore(currentGameMode.GetName());

        CheckIfGameUnlocked();
        CheckIfHealth(hasHealth);
        CheckIfBullets(hasBullets);
        CheckIfScore(score);
    }

    #region MissionConfig if checks

    void CheckIfGameUnlocked()
    {
        // Check if the game mode is unlocked and update UI accordingly
        if (isGameUnlocked)
        {
            requiredGameModeText.fontSize = 12;
            gameModeStatusText.text = "Granted";
            requiredGameModeText.text = "NA";
            requiredHighscoreText.text = "NA";
            lockedImage.SetActive(false);
        }
        else
        {
            gameModeStatusText.text = "Denied";
            requiredGameModeText.fontSize = 12;
            requiredGameModeText.text = currentGameMode.GetRequiredMode();
            requiredHighscoreText.text = currentGameMode.GetRequiredPoints().ToString();
            lockedImage.SetActive(true);
        }
    }

    void CheckIfHealth(bool hasHealth)
    {
        // Check if the player has health and update UI accordingly
        if (hasHealth)
        {
            healthBoolText.text = "AFFIRMATIVE";
        }
        else
        {
            healthBoolText.text = "NEGATIVE";
        }
    }

    void CheckIfBullets(bool hasBullets)
    {
        // Check if the player has bullets and update UI accordingly
        if (hasBullets)
        {
            bulletBoolText.text = "AFFIRMATIVE";
            playerCanShootText.text = ConvertCanShootIntToString();
        }
        else
        {
            bulletBoolText.text = "NEGATIVE";
            playerCanShootText.text = "NA";
        }
    }

    string ConvertCanShootIntToString()
    {
        // Convert the player's shooting ability to a readable string
        switch (currentGameMode.GetPlayerCanShoot())
        {
            case 1:
                return "Obstacles";

            case 2:
                return "Cars";

            case 3:
                return "Everything";

            default:
                return "Obstacles";
        }
    }

    void CheckIfScore(int? score)
    {
        // Check if the player has a highscore and update UI accordingly
        if (score.HasValue)
        {
            highscoreText.text = score.ToString();
        }
        else
        {
            highscoreText.text = "Metrics not Available";
        }
    }

    #endregion

    void ConvertModeIntToName(int chosenGameModeInt)
    {
        // Convert the game mode index to a game mode name and update the persistent game mode
        string gameModeName = gameModeNames[chosenGameModeInt];
        modePersist.SetGameMode(gameModeName);
    }
    #endregion

    void LevelValueChanged(TMP_Dropdown change)
    {
        // Handle changes in the level dropdown
        selectedLevel = levelDropdown.value;

        if (selectedLevel >= 0 && selectedLevel < levelImages.Length)
        {
            levelImage.sprite = levelImages[selectedLevel];
        }
    }

    #region UI only methods

    public void ExitGame()
    {
        // Exit the game
        Application.Quit();
        Debug.Log("Closing Application");
    }

    public void PlayClickAudio()
    {
        // Play the button clicking sound
        audioSource.clip = clickAudio;
        audioSource.volume = 0.3f;
        if (settingsData.SoundFxBool)
        {
            audioSource.Play();
        }
    }

    public void PlayPaperAudio()
    {
        // Play a paper shuffling sound
        int index = Random.Range(1, paperAudioClips.Length);
        audioSource.clip = paperAudioClips[index];
        audioSource.volume = 1;
        if (settingsData.SoundFxBool)
        {
            audioSource.Play();
        }
    }

    public void StartGame()
    {
        // Start the game based on the selected level and unlocked status
        if (isGameUnlocked)
        {
            switch (selectedLevel)
            {
                case 0:
                    modePersist.SetLevel("Grass");
                    LoadCorrectScene(1);
                    break;

                case 1:
                    modePersist.SetLevel("Desert");
                    LoadCorrectScene(2);
                    break;

                case 2:
                    modePersist.SetLevel("City");
                    LoadCorrectScene(3);
                    break;

                case 3:
                    modePersist.SetLevel("Night");
                    LoadCorrectScene(4);
                    break;

                default:
                    modePersist.SetLevel("Grass");
                    LoadCorrectScene(1);
                    break;
            }
        }
        else
        {
            StartCoroutine(ShowWarning());
        }
    }

    IEnumerator ShowWarning()
    {
        // Display a warning message for a short duration
        warningImage.SetActive(true);
        yield return new WaitForSeconds(2);
        warningImage.SetActive(false);
    }

    void LoadCorrectScene(int sceneIndex)
    {
        // Load the correct game scene based on the selected level
        SceneManager.LoadScene(sceneIndex);
    }

    #endregion
}