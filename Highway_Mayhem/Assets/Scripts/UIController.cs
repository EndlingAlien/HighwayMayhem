using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    #region Variables

    [Header("Canvases")]
    [Tooltip("List of Canvases in Hierarchy")]
    [SerializeField] GameObject[] canvases;
    [Space(10)]

    [Header("Sliders")]
    [SerializeField] GameObject healthSliderObject;
    [SerializeField] GameObject cooldownSliderObject;

    [Header("Text")]
    [SerializeField] TextMeshProUGUI wasdText;
    [SerializeField] TextMeshProUGUI spaceText;
    [SerializeField] TextMeshProUGUI arrowText;
    [SerializeField] TextMeshProUGUI finalScoreText;
    [SerializeField] RectTransform scoreRect;
    Slider healthSlider;
    Slider cooldownSlider;

    bool isGamePaused;
    GameObject desiredCanvas;

    //Scripts
    DeathHandler deathHandler;
    ModePersist modePersist;
    GameModeController gameMode;
    ScoreKeeper scoreKeeper;

    #endregion

    void Start()
    {
        isGamePaused = false;

        healthSlider = healthSliderObject.GetComponent<Slider>();
        cooldownSlider = cooldownSliderObject.GetComponent<Slider>();

        deathHandler = FindObjectOfType<DeathHandler>();
        modePersist = FindObjectOfType<ModePersist>();
        gameMode = FindObjectOfType<GameModeController>();
        scoreKeeper = FindObjectOfType<ScoreKeeper>();

        PlaceSliders();
        ConfigureHealthSlider();
        ConfigureCooldownSlider();
    }

    #region Sliders

    void ConfigureHealthSlider()
    {
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

    void PlaceSliders()
    {
        RectTransform healthRect = healthSliderObject.GetComponent<RectTransform>();
        RectTransform cooldownRect = cooldownSliderObject.GetComponent<RectTransform>();
        // RectTransform scoreRect = scoreText.GetComponent<RectTransform>();

        if (!gameMode.CurrentGameMode.GetPlayerHasBullets() && gameMode.CurrentGameMode.GetPlayerHasHealth())
        {
            healthRect.anchoredPosition = new Vector2(5.5f, -45.4f);
            Debug.Log("Chamge red");
        }
        else if (gameMode.CurrentGameMode.GetPlayerHasBullets() && gameMode.CurrentGameMode.GetPlayerHasHealth())
        {
            healthRect.anchoredPosition = new Vector2(5.5f, healthRect.anchoredPosition.y);
            cooldownRect.anchoredPosition = new Vector2(7.7f, healthRect.anchoredPosition.y);
            Debug.Log("hshshs");
        }

        if (gameMode.CurrentGameMode.GetName() == "Trippy")
        {
            cooldownRect.anchoredPosition = new Vector2(0, 355);
            scoreRect.anchoredPosition = new Vector2(434, 420);
        }
    }

    #endregion

    void Update()
    {
        if (!isGamePaused && Input.GetKeyDown(KeyCode.LeftControl))
        {
            PauseGame();
        }
        else if (isGamePaused && Input.GetKeyDown(KeyCode.LeftControl))
        {
            UnpauseGame();
        }

        //debug key
        if (Input.GetKeyDown(KeyCode.Q))
        {
            modePersist.ResetScenePersist();
            ReturnToMenu();
        }
    }

    #region Pause Methods

    void PauseGame()
    {
        isGamePaused = true;
        FindAndEnableCorrectCanvas("GameCanvas", false);
        FindAndEnableCorrectCanvas("PauseMenuCanvas", true);
        deathHandler.PlayerWheels(false);
        Time.timeScale = 0;
    }

    void UnpauseGame()
    {
        Time.timeScale = 1;
        desiredCanvas.SetActive(false);
        FindAndEnableCorrectCanvas("GameCanvas", true);
        deathHandler.PlayerWheels(true);
        isGamePaused = false;
    }

    #endregion

    #region Display Sliders

    public void DisplayHealthBar(float value)
    {
        healthSlider.value = value;
    }

    public void DisplayBulletCooldown(float value)
    {
        cooldownSlider.value = value;
    }

    #endregion

    #region Canvas Methods

    public void EnableGameOverCanvas()
    {
        FindAndEnableCorrectCanvas("GameOverCanvas", true);
        finalScoreText.text = "" + scoreKeeper.Points();
    }

    void FindAndEnableCorrectCanvas(string desiredTag, bool state)
    {
        foreach (GameObject canvas in canvases)
        {
            if (canvas.CompareTag(desiredTag))
            {
                desiredCanvas = canvas;
                desiredCanvas.SetActive(state);
            }
        }
    }

    void ConfigureControlText()
    {
        wasdText.text = "Use the" + "<color=green>" + " A " + "</color>" + "and" + "<color=green>" + " D " + "</color>" + "keys to control the turret";
        spaceText.text = "Use the" + "<color=green>" + " SPACEBAR " + "</color>" + "to shoot";
        arrowText.text = "Use the" + "<color=green>" + " LEFT " + "</color>" + "and" + "<color=green>" + " RIGHT " + "</color>" + "arrows to move the tank";
    }

    #endregion

    #region UI Only Methods

    public void Reload()
    {
        int currentScene = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(currentScene);
    }

    public void ReturnToPauseCanvas()
    {
        desiredCanvas.SetActive(false);
        FindAndEnableCorrectCanvas("PauseMenuCanvas", true);
    }

    public void OpenControls()
    {
        desiredCanvas.SetActive(false);
        ConfigureControlText();
        FindAndEnableCorrectCanvas("ControlsCanvas", true);
    }

    public void OpenSettings()
    {
        desiredCanvas.SetActive(false);
        FindAndEnableCorrectCanvas("SettingsCanvas", true);
    }

    public void ReturnToMenu()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene(0);
    }

    public void ResetScenePersist()
    {
        modePersist.ResetScenePersist();
    }

    #endregion
}