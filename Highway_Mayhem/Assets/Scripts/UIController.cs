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
    [SerializeField] Slider healthSlider;
    [SerializeField] Slider cooldownSlider;

    bool isGamePaused;
    GameObject desiredCanvas;

    //Scripts
    DeathHandler deathHandler;
    ScenePersist scenePersist;
    GameModeController gameMode;

    #endregion

    void Start()
    {
        isGamePaused = false;

        deathHandler = FindObjectOfType<DeathHandler>();
        scenePersist = FindObjectOfType<ScenePersist>();
        gameMode = FindObjectOfType<GameModeController>();

        ConfigureHealthSlider();
        ConfigureCooldownSlider();
    }

    #region Sliders

    void ConfigureHealthSlider()
    {
        if (gameMode.CurrentGameMode.GetPlayerHasHealth())
        {
            healthSlider.enabled = true;
            healthSlider.maxValue = gameMode.CurrentGameMode.GetPlayerHealth();
            healthSlider.value = gameMode.CurrentGameMode.GetPlayerHealth();
        }
        else
        {
            healthSlider.enabled = false;
        }
    }

    void ConfigureCooldownSlider()
    {
        if (gameMode.CurrentGameMode.GetPlayerHasBullets())
        {
            cooldownSlider.enabled = true;
            cooldownSlider.maxValue = gameMode.CurrentGameMode.GetCooldownAmount();
            cooldownSlider.value = gameMode.CurrentGameMode.GetCooldownAmount();
        }
        else
        {
            cooldownSlider.enabled = false;
        }
    }

    #endregion

    void Update()
    {
        if (!isGamePaused && Input.GetKeyDown(KeyCode.Escape))
        {
            PauseGame();
        }
        else if (isGamePaused && Input.GetKeyDown(KeyCode.Escape))
        {
            UnpauseGame();
        }

        //debug key
        if (Input.GetKeyDown(KeyCode.Q))
        {
            scenePersist.ResetScenePersist();
            LoadCorrectScene(0);
        }
    }

    #region Pause Methods

    void PauseGame()
    {
        isGamePaused = true;
        FindAndEnableCorrectCanvas("PauseMenuCanvas");
        deathHandler.PlayerWheels(false);
        Time.timeScale = 0;
    }

    void UnpauseGame()
    {
        Time.timeScale = 1;
        desiredCanvas.SetActive(false);
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
        FindAndEnableCorrectCanvas("GameOverCanvas");
    }

    void FindAndEnableCorrectCanvas(string desiredTag)
    {
        foreach (GameObject canvas in canvases)
        {
            if (canvas.CompareTag(desiredTag))
            {
                desiredCanvas = canvas;
                desiredCanvas.SetActive(true);
            }
        }
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
        FindAndEnableCorrectCanvas("PauseMenuCanvas");
    }

    public void OpenControls()
    {
        desiredCanvas.SetActive(false);
        FindAndEnableCorrectCanvas("ControlsCanvas");
    }

    public void OpenSettings()
    {
        desiredCanvas.SetActive(false);
        FindAndEnableCorrectCanvas("SettingsCanvas");
    }

    public void LoadCorrectScene(int index)
    {
        SceneManager.LoadScene(index);
    }

    public void ExitGame()
    {
        Application.Quit();
        Debug.Log("Closing Application");
    }

    public void ResetScenePersist()
    {
        scenePersist.ResetScenePersist();
    }

    #endregion
}
