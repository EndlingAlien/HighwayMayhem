using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScenePersist : MonoBehaviour
{
    //if in gamescene, when you use debug key Q, from UIController, chosengamemode does not change
    string chosenGameMode;
    public string ChosenGameMode { get { return chosenGameMode; } }

    //do not delete this gameobject unless more than one
    void Awake()
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

    //only for UI
    public void SetGameMode(string mode)
    {
        chosenGameMode = mode;
    }
}
