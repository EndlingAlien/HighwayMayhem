using UnityEngine;

public class RepeatHighway : MonoBehaviour
{
    // Variables
    float repeatWidth; // Width of the repeated object
    Vector3 startPos; // Starting position of the object

    // GameMode
    GameModeController gameMode; // Reference to the GameModeController
    float speed; // Speed of movement

    void Start()
    {
        // Find the GameModeController and get the highway speed
        gameMode = FindObjectOfType<GameModeController>();
        speed = gameMode.CurrentGameMode.GetHighwaySpeed();

        // Initialize starting position and calculate repeat width
        startPos = transform.position;
        repeatWidth = GetComponent<BoxCollider>().size.z / 2;
    }

    void Update()
    {
        // Move the object backward based on speed and time
        transform.Translate(Vector3.back * Time.deltaTime * speed);

        // Check if the object moved beyond the repeat width
        if (transform.position.z < startPos.z - repeatWidth)
        {
            // Reset the object's position to the starting position
            transform.position = startPos;
        }
    }
}