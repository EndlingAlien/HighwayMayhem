using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UIController : MonoBehaviour
{
    [Tooltip("List of Canvases in Hierarchy")]
    [SerializeField] GameObject[] canvases;
    GameObject desiredCanvas;

    DeathHandler deathHandler;
    bool isGamePaused;

    void Start()
    {
        isGamePaused = false;
        deathHandler = FindObjectOfType<DeathHandler>();
    }

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

        if (Input.GetKeyDown(KeyCode.Q))
        {
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

    #region UI Methods
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
    #endregion
}
