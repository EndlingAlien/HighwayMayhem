using UnityEngine;

public class ModePersist : MonoBehaviour
{
    string chosenGameMode;
    public string ChosenGameMode { get { return chosenGameMode; } }

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

    public void ResetScenePersist()
    {
        Destroy(gameObject);
    }

    #endregion
}