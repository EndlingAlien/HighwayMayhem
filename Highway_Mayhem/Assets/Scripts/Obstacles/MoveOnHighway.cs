using UnityEngine;

public class MoveOnHighway : MonoBehaviour
{
    // Speed of movement along the highway
    float speed;

    // Reference to the GameModeController to get the current game mode's settings
    GameModeController gameMode;

    // Called when the object is initialized
    void Start()
    {
        // Find the GameModeController in the scene
        gameMode = FindObjectOfType<GameModeController>();

        // Get the obstacle speed from the current game mode
        speed = gameMode.CurrentGameMode.GetObstacleSpeed();
    }

    // Called every frame
    void Update()
    {
        // Move the object forward based on the speed and deltaTime
        transform.Translate(Vector3.forward * Time.deltaTime * speed);
    }
}