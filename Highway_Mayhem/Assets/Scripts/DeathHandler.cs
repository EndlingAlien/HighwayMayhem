using UnityEngine;

public class DeathHandler : MonoBehaviour
{
    #region Variables

    AudioSource playerExplodeAudio;

    bool isPlayerAlive = true;
    public bool IsPlayerAlive { get { return isPlayerAlive; } }

    // Obstacle scripts
    RepeatHighway[] repeatHighway;
    DespawnObject despawnObject;
    MoveOnHighway moveOnHighway;
    AudioSource[] audioSources;

    // Scripts
    PlayerController playerController;
    RotateWheels[] rotateWheels;
    UIController UIscript;
    GameData gameData;
    GameModeController gameMode;
    ScoreKeeper scoreKeeper;
    SettingsData settingsData;

    #endregion

    void Start()
    {
        // Initialize variables
        playerExplodeAudio = GetComponent<AudioSource>();
        settingsData = FindObjectOfType<SettingsData>();
    }

    public void ActivateGameOver()
    {
        // Stop obstacles, disable player wheels, stop bullets, and play game over audio
        StopObstacles();
        PlayerWheels(false);
        PlayerBulletsAndAudio();

        // Activate the Game Over canvas in the UI
        UIscript = FindObjectOfType<UIController>();
        UIscript.EnableGameOverCanvas();

        // Play the player explosion audio if sound effects are enabled
        audioSources = FindObjectsOfType<AudioSource>();
        foreach (AudioSource audio in audioSources)
        {
            audio.volume = .01f;
        }

        if (settingsData.SoundFxBool)
        {
            playerExplodeAudio.volume = .8f;
            playerExplodeAudio.Play();
        }
    }

    #region Obstacle Methods

    void StopObstacles()
    {
        // Disable obstacle scripts and set player status to not alive
        repeatHighway = FindObjectsOfType<RepeatHighway>();
        despawnObject = FindObjectOfType<DespawnObject>();

        isPlayerAlive = false;

        foreach (RepeatHighway script in repeatHighway)
        {
            script.enabled = false;
        }

        AccessDespawnChildScript();
    }

    void AccessDespawnChildScript()
    {
        // Disable child scripts of the DespawnObject
        for (int i = despawnObject.transform.childCount - 1; i >= 0; i--)
        {
            Transform despawnChild = despawnObject.transform.GetChild(i);

            foreach (Transform child in despawnChild)
            {
                moveOnHighway = despawnChild.GetComponent<MoveOnHighway>();
                if (moveOnHighway == null) { return; }
                moveOnHighway.enabled = false;
            }
        }
    }

    #endregion

    #region Player Methods

    public void PlayerWheels(bool value)
    {
        // Enable or disable player wheel rotations
        rotateWheels = FindObjectsOfType<RotateWheels>();

        foreach (RotateWheels wheel in rotateWheels)
        {
            wheel.enabled = value;
        }
    }

    void PlayerBulletsAndAudio()
    {
        // Stop all bullets and audio for the player
        playerController = FindObjectOfType<PlayerController>();
        playerController.StopAllBullets();
        playerController.StopAudio();
    }

    #endregion

    // UI-only method
    public void ProcessPlayerScore()
    {
        // Update player score in the UI
        scoreKeeper = FindObjectOfType<ScoreKeeper>();
        gameMode = FindObjectOfType<GameModeController>();
        gameData = FindObjectOfType<GameData>();

        gameData.CheckAndSetHighscore(gameMode.CurrentGameMode.GetName(), scoreKeeper.Points());
    }
}