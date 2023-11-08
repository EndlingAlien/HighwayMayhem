using UnityEngine;

public class GameModeController : MonoBehaviour
{
    //ModePersist
    string chosenMode;
    ModePersist modePersist;

    //GameMode
    GameModeSO currentGameMode;
    public GameModeSO CurrentGameMode { get { return currentGameMode; } }

    void Awake()
    {
        modePersist = FindObjectOfType<ModePersist>();
        chosenMode = modePersist.ChosenGameMode;

        FindGameMode();
    }

    void FindGameMode()
    {
        GameModeSO[] gameModes = Resources.LoadAll<GameModeSO>("GameModes");
        foreach (GameModeSO mode in gameModes)
        {
            if (mode.GetName() == chosenMode)
            {
                currentGameMode = mode;
                return;
            }
            //fail safe
            currentGameMode = Resources.Load<GameModeSO>("GameModes/Default");
            if (currentGameMode == null)
            {
                Debug.LogError("Default game mode not found!");
            }
        }
    }
}