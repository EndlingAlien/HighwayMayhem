using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class MenuUIController : MonoBehaviour
{

    [Header("Canvases")]
    [Tooltip("List of Canvases in Hierarchy")]
    [SerializeField] GameObject[] canvases;
    [Space(10)]

    [Header("Text Fields")]
    [SerializeField] TextMeshProUGUI bulletBoolText;
    [SerializeField] TextMeshProUGUI healthBoolText;
    [SerializeField] TextMeshProUGUI highscoreText;
    [Space(10)]

    [Header("Dropdowns")]
    [SerializeField] TMP_Dropdown gamemodeDropdown;
    [SerializeField] TMP_Dropdown levelDropdown;
    [Space(10)]

    [Header("Images")]
    [SerializeField] UnityEngine.UI.Image gameModeImage;
    [SerializeField] UnityEngine.UI.Image levelImage;

    [Header("Image Array's")]
    [SerializeField] Sprite[] gameModeImages;
    [SerializeField] Sprite[] levelImages;

    [Header("Game Modes")]
    [SerializeField] string[] gameModeNames;
    GameModeSO currentGameMode;

    string chosenMode;
    int selectedLevel;

    ModePersist modePersist;
    SavedData savedData;

    void Start()
    {
        modePersist = FindObjectOfType<ModePersist>();
        savedData = FindObjectOfType<SavedData>();

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
        bool hasHealth = currentGameMode.GetPlayerHasHealth();
        bool hasBullets = currentGameMode.GetPlayerHasBullets();
        int? score = savedData.CheckHighscore(chosenMode);

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
        }
        else
        {
            bulletBoolText.text = "NEGATIVE";
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

    public void StartGame()
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

    void LoadCorrectScene(int sceneIndex)
    {
        SceneManager.LoadScene(sceneIndex);
    }
}