using UnityEngine;

public class ScenePersist : MonoBehaviour
{
    string chosenGameMode;
    public string ChosenGameMode { get { return chosenGameMode; } }

    void Awake()
    {
        CheckScripts();
    }

    void CheckScripts()
    {
        int numScenePersist = FindObjectsOfType<ScenePersist>().Length;

        if (numScenePersist > 1)
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

    public void ResetScenePersist()
    {
        Destroy(gameObject);
    }

    #endregion
}