using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using System;
using System.Collections;

public class MenuUIController : MonoBehaviour
{

    [Header("Canvases")]
    [Tooltip("List of Canvases in Hierarchy")]
    [SerializeField] GameObject[] canvases;
    [Space(10)]

    [Header("Text Fields")]
    [SerializeField] TextMeshProUGUI gameModeStatusText;
    [SerializeField] TextMeshProUGUI requiredGameModeText;
    [SerializeField] TextMeshProUGUI requiredHighscoreText;
    [SerializeField] TextMeshProUGUI bulletBoolText;
    [SerializeField] TextMeshProUGUI playerCanShootText;
    [SerializeField] TextMeshProUGUI healthBoolText;
    [SerializeField] TextMeshProUGUI highscoreText;
    [Space(10)]

    [Header("Dropdowns")]
    [SerializeField] TMP_Dropdown gamemodeDropdown;
    [SerializeField] TMP_Dropdown levelDropdown;
    [Space(10)]

    [Header("Images")]
    [SerializeField] UnityEngine.UI.Image gameModeImage;
    [SerializeField] GameObject lockedImage;
    [SerializeField] UnityEngine.UI.Image levelImage;
    [SerializeField] GameObject warningImage;

    [Header("Image Array's")]
    [SerializeField] Sprite[] gameModeImages;
    [SerializeField] Sprite[] levelImages;

    [Header("Game Modes")]
    [SerializeField] string[] gameModeNames;
    GameModeSO currentGameMode;

    [Header("Audio")]
    [SerializeField] AudioClip[] paperAudioClips;
    [SerializeField] AudioClip clickAudio;
    AudioSource audioSource;

    string chosenMode;
    int selectedLevel;

    ModePersist modePersist;
    SavedData savedData;

    void Start()
    {
        modePersist = FindObjectOfType<ModePersist>();
        savedData = FindObjectOfType<SavedData>();
        audioSource = GetComponent<AudioSource>();

        gamemodeDropdown.onValueChanged.AddListener(delegate { GameModeValueChanged(gamemodeDropdown); });
        levelDropdown.onValueChanged.AddListener(delegate { LevelValueChanged(levelDropdown); });

        //dropdown default
        FindGameMode("Easy");
        modePersist.SetGameMode("Easy");
        selectedLevel = 0;
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            ExitGame();
        }
    }

    void GameModeValueChanged(TMP_Dropdown change)
    {
        int selectedValue = gamemodeDropdown.value;

        if (selectedValue >= 0 && selectedValue < gameModeImages.Length)
        {
            gameModeImage.sprite = gameModeImages[selectedValue];

            chosenMode = gameModeNames[selectedValue];
            FindGameMode(chosenMode);
            ConvertModeIntToName(selectedValue);
        }
        else
        {
            Debug.LogError("Invalid dropdown value");
        }
    }

    void ConfigureMissionDetails()
    {
        bool isGameUnlocked = currentGameMode.IsGameModeUnlocked;
        bool hasHealth = currentGameMode.GetPlayerHasHealth();
        bool hasBullets = currentGameMode.GetPlayerHasBullets();

        int? score = savedData.CheckHighscore(chosenMode);

        if (isGameUnlocked)
        {
            gameModeStatusText.text = "Granted";
            requiredGameModeText.text = "NA";
            requiredHighscoreText.text = "NA";
            lockedImage.SetActive(false);
        }
        else
        {
            gameModeStatusText.text = "Denied";
            requiredGameModeText.text = currentGameMode.GetRequiredMode();
            requiredHighscoreText.text = currentGameMode.GetRequiredPoints().ToString();
            lockedImage.SetActive(true);
        }

        if (hasHealth)
        {
            healthBoolText.text = "AFFIRMATIVE";
        }
        else
        {
            healthBoolText.text = "NEGATIVE";
        }

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

        if (score.HasValue)
        {
            highscoreText.text = score.ToString();
        }
        else
        {
            highscoreText.text = "Metrics not Available";
        }
    }

    string ConvertCanShootIntToString()
    {
        switch (currentGameMode.GetPlayerCanShoot())
        {
            case 1:
                return "Obstacles";

            case 2:
                return "Cars";

            case 3:
                return "Everything";

            default:
                Debug.Log("Can not find value for PlayerCanShoot");
                return "Obstacles";
        }
    }

    void LevelValueChanged(TMP_Dropdown change)
    {
        selectedLevel = levelDropdown.value;

        if (selectedLevel >= 0 && selectedLevel < levelImages.Length)
        {
            levelImage.sprite = levelImages[selectedLevel];
        }
    }

    void FindGameMode(string chosenMode)
    {
        GameModeSO[] gameModes = Resources.LoadAll<GameModeSO>("GameModes");
        foreach (GameModeSO mode in gameModes)
        {
            if (mode.GetName() == chosenMode)
            {
                currentGameMode = mode;
                ConfigureMissionDetails();
                return;
            }
        }
        // Fail-safe
        currentGameMode = Resources.Load<GameModeSO>("GameModes/Default");
        if (currentGameMode == null)
        {
            Debug.LogError("Default game mode not found!");
        }
    }

    void ConvertModeIntToName(int chosenGameModeInt)
    {
        string gameModeName = gameModeNames[chosenGameModeInt];
        modePersist.SetGameMode(gameModeName);
    }

    public void ExitGame()
    {
        Application.Quit();
        Debug.Log("Closing Application");
    }

    public void PlayClickAudio()
    {
        audioSource.clip = clickAudio;
        audioSource.volume = 0.3f;
        audioSource.Play();
    }

    public void PlayPaperAudio()
    {
        int index = UnityEngine.Random.Range(1, paperAudioClips.Length);
        audioSource.clip = paperAudioClips[index];
        audioSource.volume = 1;
        audioSource.Play();
    }

    public void StartGame()
    {
        if (currentGameMode.IsGameModeUnlocked)
        {
            switch (selectedLevel)
            {
                case 0:
                    modePersist.Setlevel("Grass");
                    LoadCorrectScene(1);
                    break;

                case 1:
                    modePersist.Setlevel("Desert");
                    LoadCorrectScene(2);
                    break;

                case 2:
                    modePersist.Setlevel("City");
                    LoadCorrectScene(3);
                    break;

                case 3:
                    modePersist.Setlevel("Night");
                    LoadCorrectScene(4);
                    break;

                default:
                    modePersist.Setlevel("Grass");
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
        warningImage.SetActive(true);
        yield return new WaitForSeconds(2);
        warningImage.SetActive(false);
    }

    void LoadCorrectScene(int sceneIndex)
    {
        SceneManager.LoadScene(sceneIndex);
    }
}