using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    // Variables
    #region Variables

    [Header("Sliders")]
    [Tooltip("Reference to the UI element Health Slider")]
    [SerializeField] GameObject healthSliderObject;
    [Tooltip("Reference to the UI element cooldown Slider")]
    [SerializeField] GameObject cooldownSliderObject;
    [Space(10)]

    [Header("Text")]
    [Tooltip("Reference to the UI text element WASD text")]
    [SerializeField] TextMeshProUGUI wasdText;
    [Tooltip("Reference to the UI text element SpaceBar text")]
    [SerializeField] TextMeshProUGUI spaceText;
    [Tooltip("Reference to the UI text element arrows text ")]
    [SerializeField] TextMeshProUGUI arrowText;
    [Tooltip("Reference to the UI text element for the final score text")]
    [SerializeField] TextMeshProUGUI finalScoreText;
    [Tooltip("Reference to the rect transform for the Game Canvas score text")]
    [SerializeField] RectTransform scoreRect;
    [Space(10)]

    [Header("Settings Variables")]
    [Tooltip("Reference to the sound FX toggle in Settings Canvas")]
    [SerializeField] Toggle soundFxToggle;
    [Tooltip("Reference to the background music toggle in Settings Canvas")]
    [SerializeField] Toggle musicToggle;
    [Tooltip("Reference to the background music volume slider in Settings Canvas")]
    [SerializeField] Slider musicSlider;
    [Space(10)]

    [Header("Canvases")]
    [Tooltip("List of Canvases in Hierarchy")]
    [SerializeField] GameObject[] canvases;
    [Space(10)]

    //AudioListener mainCam;
    AudioSource[] audioSources;
    Slider healthSlider;
    Slider cooldownSlider;
    bool isGamePaused;
    GameObject desiredCanvas;

    // Scripts
    DeathHandler deathHandler;
    ModePersist modePersist;
    GameModeController gameMode;
    ScoreKeeper scoreKeeper;
    SettingsData settingsData;

    #endregion

    void Start()
    {
        // Initialization
        isGamePaused = false;
        healthSlider = healthSliderObject.GetComponent<Slider>();
        cooldownSlider = cooldownSliderObject.GetComponent<Slider>();
        //mainCam = FindObjectOfType<AudioListener>();

        FindScripts();
        CreateUIListeners();
        CheckIfSettingsData();

        PlaceSliders();
        ConfigureHealthSlider();
        ConfigureCooldownSlider();
    }

    void FindScripts()
    {
        // Finding references to various scripts
        deathHandler = FindObjectOfType<DeathHandler>();
        modePersist = FindObjectOfType<ModePersist>();
        gameMode = FindObjectOfType<GameModeController>();
        scoreKeeper = FindObjectOfType<ScoreKeeper>();
        settingsData = FindObjectOfType<SettingsData>();
    }

    void CreateUIListeners()
    {
        // Creating listeners for UI elements
        soundFxToggle.onValueChanged.AddListener(delegate { SoundFxValueChanged(soundFxToggle); });
        musicToggle.onValueChanged.AddListener(delegate { MusicToggleValueChanged(musicToggle); });
        musicSlider.onValueChanged.AddListener(delegate { MusicSliderValueChanged(musicSlider); });
    }

    #region Listeners

    void SoundFxValueChanged(Toggle change)
    {
        // Handling Sound FX toggle value change
        if (settingsData.SoundFxBool != change.isOn)
        {
            settingsData.SoundFxBool = change.isOn;
            settingsData.SaveSettingsData();
        }
    }

    void MusicToggleValueChanged(Toggle change)
    {
        // Handling Music toggle value change
        if (settingsData.MusicBool != change.isOn)
        {
            settingsData.MusicBool = change.isOn;
            settingsData.SaveSettingsData();
        }
    }

    void MusicSliderValueChanged(Slider change)
    {
        // Handling Music volume slider value change
        if (settingsData.MusicVolume != change.value)
        {
            settingsData.MusicVolume = change.value;
            settingsData.SaveSettingsData();
        }
    }

    #endregion

    void CheckIfSettingsData()
    {
        // Checking and loading settings data
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

    #region Slider Methods

    void PlaceSliders()
    {
        // Adjusting slider positions based on game mode settings
        RectTransform healthRect = healthSliderObject.GetComponent<RectTransform>();
        RectTransform cooldownRect = cooldownSliderObject.GetComponent<RectTransform>();

        if (!gameMode.CurrentGameMode.GetPlayerHasBullets() && gameMode.CurrentGameMode.GetPlayerHasHealth())
        {
            healthRect.anchoredPosition = new Vector2(5.5f, -45.4f);
        }
        else if (gameMode.CurrentGameMode.GetPlayerHasBullets() && gameMode.CurrentGameMode.GetPlayerHasHealth())
        {
            healthRect.anchoredPosition = new Vector2(5.5f, healthRect.anchoredPosition.y);
            cooldownRect.anchoredPosition = new Vector2(7.7f, healthRect.anchoredPosition.y);
        }

        if (gameMode.CurrentGameMode.GetName() == "Trippy")
        {
            cooldownRect.anchoredPosition = new Vector2(0, 355);
            scoreRect.anchoredPosition = new Vector2(434, 420);
        }
    }

    void ConfigureHealthSlider()
    {
        // Configuring health slider based on game mode settings
        if (gameMode.CurrentGameMode.GetPlayerHasHealth())
        {
            healthSliderObject.SetActive(true);
            healthSlider.maxValue = gameMode.CurrentGameMode.GetPlayerHealth();
            healthSlider.value = gameMode.CurrentGameMode.GetPlayerHealth();
        }
        else
        {
            healthSliderObject.SetActive(false);
        }
    }

    void ConfigureCooldownSlider()
    {
        // Configuring cooldown slider based on game mode settings
        if (gameMode.CurrentGameMode.GetPlayerHasBullets())
        {
            cooldownSliderObject.SetActive(true);
            cooldownSlider.maxValue = gameMode.CurrentGameMode.GetCooldownAmount();
            cooldownSlider.value = gameMode.CurrentGameMode.GetCooldownAmount();
        }
        else
        {
            cooldownSliderObject.SetActive(false);
        }
    }

    public void DisplayHealthBar(float value)
    {
        // Updating health slider value
        healthSlider.value = value;
    }

    public void DisplayBulletCooldown(float value)
    {
        // Updating cooldown slider value
        cooldownSlider.value = value;
    }

    #endregion

    public void SaveData()
    {
        // Processing player score in DeathHandler
        deathHandler.ProcessPlayerScore();
    }

    void Update()
    {
        // Handling pause/unpause on Left Control key press
        if (!isGamePaused && Input.GetKeyDown(KeyCode.LeftControl))
        {
            PauseGame();
        }
        else if (isGamePaused && Input.GetKeyDown(KeyCode.LeftControl))
        {
            UnpauseGame();
        }
    }

    #region Pause Methods

    void PauseGame()
    {
        // Pausing the game
        isGamePaused = true;
        FindAndEnableCorrectCanvas("GameCanvas", false);
        FindAndEnableCorrectCanvas("PauseMenuCanvas", true);
        deathHandler.PlayerWheels(false);
        AccessAllSounds(false);
        Time.timeScale = 0;
    }

    void UnpauseGame()
    {
        // Unpausing the game
        Time.timeScale = 1;
        AccessAllSounds(true);
        desiredCanvas.SetActive(false);
        FindAndEnableCorrectCanvas("GameCanvas", true);
        deathHandler.PlayerWheels(true);
        isGamePaused = false;
    }

    void AccessAllSounds(bool value)
    {
        audioSources = FindObjectsOfType<AudioSource>();
        foreach (AudioSource audio in audioSources)
        {
            if(!audio.CompareTag("BGMusic"))
            {
                audio.enabled = value;
            }
        }
    }

    #endregion

    #region Canvas Methods

    public void EnableGameOverCanvas()
    {
        // Enabling Game Over canvas and displaying final score
        FindAndEnableCorrectCanvas("GameOverCanvas", true);
        finalScoreText.text = "" + scoreKeeper.Points();
    }

    void FindAndEnableCorrectCanvas(string desiredTag, bool state)
    {
        // Finding and enabling the correct canvas based on the tag
        foreach (GameObject canvas in canvases)
        {
            if (canvas.CompareTag(desiredTag))
            {
                desiredCanvas = canvas;
                desiredCanvas.SetActive(state);
            }
        }
    }

    #endregion

    #region UI Only Methods

    public void SavingHighscore()
    {
        deathHandler.ProcessPlayerScore();
    }

    public void Reload()
    {
        // Reloading the current scene
        int currentScene = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(currentScene);
    }

    public void ReturnToPauseCanvas()
    {
        // Returning to the Pause Menu canvas
        desiredCanvas.SetActive(false);
        FindAndEnableCorrectCanvas("PauseMenuCanvas", true);
    }

    public void OpenControls()
    {
        // Opening the Controls canvas and configuring control text
        desiredCanvas.SetActive(false);
        ConfigureControlText();
        FindAndEnableCorrectCanvas("ControlsCanvas", true);
    }

    void ConfigureControlText()
    {
        // Configuring control text based on control instructions
        wasdText.text = "Use the" + "<color=green>" + " A " + "</color>" + "and" + "<color=green>" + " D " + "</color>" + "keys to control the turret";
        spaceText.text = "Use the" + "<color=green>" + " SPACEBAR " + "</color>" + "to shoot";
        arrowText.text = "Use the" + "<color=green>" + " LEFT " + "</color>" + "and" + "<color=green>" + " RIGHT " + "</color>" + "arrows to move the tank";
    }

    public void OpenSettings()
    {
        // Opening the Settings canvas
        desiredCanvas.SetActive(false);
        FindAndEnableCorrectCanvas("SettingsCanvas", true);
    }

    public void ReturnToMenu()
    {
        // Returning to the main menu
        Time.timeScale = 1;
        SceneManager.LoadScene(0);
    }

    public void ResetScenePersist()
    {
        // Resetting ScenePersist in ModePersist script
        modePersist.ResetScenePersist();
    }

    #endregion
}