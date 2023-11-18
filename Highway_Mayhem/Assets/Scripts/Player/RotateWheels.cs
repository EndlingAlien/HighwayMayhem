using UnityEngine;

public class RotateWheels : MonoBehaviour
{
    // GameMode
    GameModeController gameMode; // Reference to the GameModeController
    float speed; // Speed of movement

    void Start()
    {
        // Find the GameModeController and get the highway speed
        gameMode = FindObjectOfType<GameModeController>();
        speed = gameMode.CurrentGameMode.GetHighwaySpeed();
    }

    void Update()
    {
        // Rotate the object around the right axis based on the speed
        transform.Rotate(Vector3.right * Time.deltaTime * speed * 2);
    }
}