using UnityEngine;

public class MoveOnHighway : MonoBehaviour
{
    float speed;
    GameModeController gameMode;

    void Start()
    {
        gameMode = FindObjectOfType<GameModeController>();
        speed = gameMode.CurrentGameMode.GetObstacleSpeed();
    }

    void Update()
    {
        transform.Translate(Vector3.forward * Time.deltaTime * speed);
    }
}
