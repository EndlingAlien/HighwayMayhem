using UnityEngine;

public class ModePersist : MonoBehaviour
{
    string chosenGameMode;
    public string ChosenGameMode { get { return chosenGameMode; } }

    string chosenLevel;
    public string ChosenLevel { get { return chosenLevel; } }


    void Awake()
    {
        CheckScripts();
    }

    void CheckScripts()
    {
        int numModePersist = FindObjectsOfType<ModePersist>().Length;

        if (numModePersist > 1)
        {
            Destroy(gameObject);
        }
        else
        {
            DontDestroyOnLoad(gameObject);
        }
    }

    #region UI only Methods

    public void SetGameMode(string mode)
    {
        chosenGameMode = mode;
    }

    public void Setlevel(string level)
    {
        chosenLevel = level;
    }

    public void ResetScenePersist()
    {
        Destroy(gameObject);
    }

    #endregion
}