using System.Collections.Generic;
using UnityEngine;

public class SavedData : MonoBehaviour
{
    List<GameModeSO> lockedGameModes = new List<GameModeSO>();
    List<GameModeSO> unlockedGameModes = new List<GameModeSO>();
    Dictionary<string, int> highScore = new Dictionary<string, int>();
    GameModeSO unlockMode;

    const string lockedGameModesKey = "LockedGameModes";
    const string unlockedGameModesKey = "UnlockedGameModes";
    const string highScoreKey = "Highscore";

    void Awake()
    {
        CheckScripts();
        AddGameModeToList();
        //LoadData();
    }

    void CheckScripts()
    {
        int numSavedData = FindObjectsOfType<SavedData>().Length;

        if (numSavedData > 1)
        {
            Destroy(gameObject);
        }
        else
        {
            DontDestroyOnLoad(gameObject);
        }
    }

    void AddGameModeToList()
    {
        GameModeSO[] gameModes = Resources.LoadAll<GameModeSO>("GameModes");
        foreach (GameModeSO mode in gameModes)
        {
            if (mode.GetName() == "Easy" || mode.GetName() == "Normal" || mode.GetName() == "Hard" || mode.GetName() == "Default")
            {
                mode.IsGameModeUnlocked = true;
                unlockedGameModes.Add(mode);
            }
            if (mode.IsGameModeUnlocked)
            {
                unlockedGameModes.Add(mode);
            }
            else
            {
                lockedGameModes.Add(mode);
            }
        }
    }

    public bool CheckAndSetHighscore(string gameMode, int score)
    {
        if (highScore.ContainsKey(gameMode))
        {
            if (score > highScore[gameMode])
            {
                highScore[gameMode] = score;
                Debug.Log("Gamemode: " + gameMode + " Has a new Highscore of: " + score);
                return true;
            }
        }
        else
        {
            highScore[gameMode] = score;
            Debug.Log("Initialized new highscore: " + score + " for game mode: " + gameMode);
        }
        Debug.Log("Highscore was not beat! Highscore for Game mode: " + gameMode + " is still: " + highScore[gameMode]);
        return false;
    }

    public bool CanUnlockGamemode(string currentGameMode, string modeToUnlock)
    {
        if (highScore.ContainsKey(currentGameMode))
        {
            unlockMode = lockedGameModes.Find(mode => mode.GetName() == modeToUnlock);
            MoreThanOneRequirement();

            if (unlockMode != null)
            {
                int score = highScore[currentGameMode];
                int requiredPoints = unlockMode.GetRequiredPoints();

                if (score >= requiredPoints)
                {
                    Debug.Log("Game Mode: " + unlockMode.GetName() + " has been unlocked");
                    unlockedGameModes.Add(unlockMode);
                    unlockMode.IsGameModeUnlocked = true;
                    return true;
                }
            }
        }
        Debug.Log("GameMode: " + modeToUnlock + " is not found/ cannot be unlocked");
        return false;
    }

    bool MoreThanOneRequirement()
    {
        if (unlockMode.GetHasMoreThanOneRequirement())
        {
            foreach (var requiredMode in unlockMode.requiredModesAndPoints.Keys)
            {
                int requiredPoints = unlockMode.requiredModesAndPoints[requiredMode];

                if (highScore.ContainsKey(requiredMode))
                {
                    int score = highScore[requiredMode];

                    if (score < requiredPoints)
                    {
                        Debug.Log("This required mode: " + requiredMode + " doesn't meet the required score.");
                        return false;
                    }
                }
                else
                {
                    Debug.Log("The gamemode: " + requiredMode + "Does not have a highScore! Play the gamemode before trying to unlock this mode!");
                    return false;
                }
            }
            Debug.Log("GameMode: " + unlockMode.GetName() + "Has been unlocked");
            unlockedGameModes.Add(unlockMode);
            unlockMode.IsGameModeUnlocked = true;
            return true;
        }
        return false;
    }


    void SaveData()
    {
        string lockedGameModesJson = JsonUtility.ToJson(lockedGameModes);
        PlayerPrefs.SetString(lockedGameModesKey, lockedGameModesJson);

        string unlockedGameModesJson = JsonUtility.ToJson(unlockedGameModes);
        PlayerPrefs.SetString(unlockedGameModesKey, unlockedGameModesJson);

        string highScoreJson = JsonUtility.ToJson(highScore);
        PlayerPrefs.SetString(highScoreKey, highScoreJson);

        PlayerPrefs.Save();
    }

    void LoadData()
    {
        if (PlayerPrefs.HasKey(lockedGameModesKey))
        {
            string lockedGameModesJson = PlayerPrefs.GetString(lockedGameModesKey);
            lockedGameModes = JsonUtility.FromJson<List<GameModeSO>>(lockedGameModesJson);
        }

        if (PlayerPrefs.HasKey(unlockedGameModesKey))
        {
            string unlockedGameModesJson = PlayerPrefs.GetString(unlockedGameModesKey);
            unlockedGameModes = JsonUtility.FromJson<List<GameModeSO>>(unlockedGameModesJson);
        }

        if (PlayerPrefs.HasKey(highScoreKey))
        {
            string highScoreJson = PlayerPrefs.GetString(highScoreKey);
            highScore = JsonUtility.FromJson<Dictionary<string, int>>(highScoreJson);
        }
    }

    void ResetAllData()
    {
        PlayerPrefs.DeleteAll();
    }

    void ResetHighScores()
    {
        PlayerPrefs.DeleteKey(highScoreKey);
    }

}