using UnityEngine;

public class GameModeController : MonoBehaviour
{
    // ModePersist
    string chosenMode;
    ModePersist modePersist;

    // GameMode
    GameModeSO currentGameMode;
    public GameModeSO CurrentGameMode { get { return currentGameMode; } }

    void Awake()
    {
        // Get the chosen game mode from ModePersist
        modePersist = FindObjectOfType<ModePersist>();
        chosenMode = modePersist.ChosenGameMode;

        // Find and set the current game mode
        FindGameMode();
    }

    void FindGameMode()
    {
        // Load all GameModeSO from the "GameModes" folder
        GameModeSO[] gameModes = Resources.LoadAll<GameModeSO>("GameModes");

        // Iterate through all loaded game modes to find the chosen one
        foreach (GameModeSO mode in gameModes)
        {
            if (mode.GetName() == chosenMode)
            {
                // Set the current game mode and exit the loop
                currentGameMode = mode;
                return;
            }
        }

        // Fail-safe: If the chosen game mode is not found, set to the default game mode
        currentGameMode = Resources.Load<GameModeSO>("GameModes/Default");

        // Check if the default game mode is not found and log an error
        if (currentGameMode == null)
        {
            Debug.LogError("Default game mode not found!");
        }
    }
}