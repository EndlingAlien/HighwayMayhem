using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;


public class GameModeController : MonoBehaviour
{
    ScenePersist scenePersist;
    GameModeSO currentGameMode;
    public GameModeSO CurrentGameMode { get { return currentGameMode; } }

    void Awake()
    {
        scenePersist = FindObjectOfType<ScenePersist>();
        FindGameMode();
    }

    void FindGameMode()
    {
        GameModeSO[] gameModes = Resources.LoadAll<GameModeSO>("GameModes");
        foreach (GameModeSO mode in gameModes)
        {
            if (mode.GetName() == scenePersist.ChosenGameMode)
            {
                currentGameMode = mode;
                Debug.Log(currentGameMode);
                return;
            }
            //fail safe
            currentGameMode = Resources.Load<GameModeSO>("GameModes/Default");
            if (currentGameMode != null)
            {
                Debug.Log("Using default game mode: " + currentGameMode.GetName());
            }
            else
            {
                Debug.LogError("Default game mode not found!");
            }
        }
    }

}