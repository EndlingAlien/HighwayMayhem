using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameData : MonoBehaviour
{
    #region Variables

    // Singleton instance
    public static GameData Instance;

    List<GameModeSO> lockedGameModes = new List<GameModeSO>();
    public List<GameModeSO> GetLockedGameModes() { return lockedGameModes; }

    List<GameModeSO> unlockedGameModes = new List<GameModeSO>();
    public List<GameModeSO> GetUnlockedGameModes() { return unlockedGameModes; }

    Dictionary<string, int> highScores = new Dictionary<string, int>();
    public Dictionary<string, int> GetHighscores() { return highScores; }

    GameModeSO unlockMode;

    #endregion

    void Awake()
    {
        InitializeSingleton();
        AddGameModeToList();
    }

    #region Awake Methods

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

    void ResetIsGameModeUnlocked()
    {
        // Resets the IsGameModeUnlocked property for all GameModeSO
        foreach (GameModeSO mode in Resources.LoadAll<GameModeSO>("GameModes"))
        {
            mode.IsGameModeUnlocked = false;
        }
    }

    void AddGameModeToList()
    {
        // Loads all GameModeSO from the "GameModes" folder
        GameModeSO[] gameModes = Resources.LoadAll<GameModeSO>("GameModes");

        foreach (GameModeSO mode in gameModes)
        {
            // Checks if the GameMode is unlocked and adds it to the appropriate list
            if (mode.IsGameModeUnlocked && !unlockedGameModes.Contains(mode))
            {
                mode.IsGameModeUnlocked = true;
                unlockedGameModes.Add(mode);
            }
            // Unlocks default game modes (Easy, Normal, Hard, Default)
            else if (!unlockedGameModes.Contains(mode) && (mode.GetName() == "Easy" || mode.GetName() == "Normal" || mode.GetName() == "Hard" || mode.GetName() == "Default"))
            {
                mode.IsGameModeUnlocked = true;
                unlockedGameModes.Add(mode);
            }
            // Adds locked game modes
            else if (!lockedGameModes.Contains(mode))
            {
                lockedGameModes.Add(mode);
            }
        }
    }

    #endregion

    #region Save Maintenance

    public int? CheckHighscore(string gameMode)
    {
        // Checks and returns the high score for a given game mode
        if (gameMode == null)
        {
            return null;
        }

        if (highScores.TryGetValue(gameMode, out int score))
        {
            return score;
        }
        else
        {
            return null;
        }
    }

    public bool CheckAndSetHighscore(string gameMode, int score)
    {
        // Checks and sets the high score for a given game mode
        if (highScores.ContainsKey(gameMode))
        {
            if (score > highScores[gameMode])
            {
                highScores[gameMode] = score;
                return true;
            }
        }
        else
        {
            highScores[gameMode] = score;
        }
        return false;
    }

    public bool CanUnlockGamemode(string currentGameMode, string modeToUnlock)
    {
        // Checks if a game mode can be unlocked based on high scores
        if (highScores.ContainsKey(currentGameMode))
        {
            unlockMode = lockedGameModes.Find(mode => mode.GetName() == modeToUnlock);

            if (unlockMode != null)
            {
                int score = highScores[currentGameMode];
                int requiredPoints = unlockMode.GetRequiredPoints();

                if (score >= requiredPoints)
                {
                    unlockedGameModes.Add(unlockMode);
                    unlockMode.IsGameModeUnlocked = true;
                    return true;
                }
            }
        }
        return false;
    }
    #endregion

    #region Reset/Debug Methods

    public void FullReset()
    {
        //Reset Highscores
        highScores.Clear();
        // Resetting unlocked game modes
        ResetIsGameModeUnlocked();
        //Reset Lists
        lockedGameModes.Clear();
        unlockedGameModes.Clear();
        // Adding default game modes back
        AddGameModeToList();
    }

    public void DebugCheat()
    {
        // Unlock all game modes, empty the locked list, and add every game mode to the unlocked list
        foreach (GameModeSO lockedMode in lockedGameModes)
        {
            // Set IsGameModeUnlocked to true for each locked game mode
            lockedMode.IsGameModeUnlocked = true;

            // Add the unlocked game mode to the list if not already present
            if (!unlockedGameModes.Contains(lockedMode))
            {
                unlockedGameModes.Add(lockedMode);
            }
        }

        // Clear the locked game modes list
        lockedGameModes.Clear();
    }
    #endregion
}