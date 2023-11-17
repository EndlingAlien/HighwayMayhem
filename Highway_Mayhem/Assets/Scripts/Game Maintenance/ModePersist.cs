using UnityEngine;

public class ModePersist : MonoBehaviour
{
    // Singleton instance
    public static ModePersist Instance;

    // Variables to store chosen game mode and level
    string chosenGameMode;
    public string ChosenGameMode { get { return chosenGameMode; } }

    string chosenLevel;
    public string ChosenLevel { get { return chosenLevel; } }

    void Awake()
    {
        // Check for existing ModePersist instances
        InitializeSingleton();
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

    #region UI only Methods

    // Set the chosen game mode
    public void SetGameMode(string mode)
    {
        chosenGameMode = mode;
    }

    // Set the chosen level
    public void SetLevel(string level)
    {
        chosenLevel = level;
    }

    // Reset the ModePersist instance when the scene is reset
    public void ResetScenePersist()
    {
        Destroy(gameObject);
    }

    #endregion
}