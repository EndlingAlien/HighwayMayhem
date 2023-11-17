using UnityEngine;

public class RepeatClouds : MonoBehaviour
{
    // Variables
    float repeatWidth; // Width of the repeated object
    float speed = 2; // Speed of movement
    Vector3 startPos; // Starting position of the object

    void Start()
    {
        // Initialize starting position and calculate repeat width
        startPos = transform.position;
        repeatWidth = GetComponent<BoxCollider>().size.x / 2;
    }

    void Update()
    {
        // Move the object to the left based on speed and time
        transform.Translate(Vector3.left * Time.deltaTime * speed);

        // Check if the object moved beyond the repeat width
        if (transform.position.x < startPos.x - repeatWidth)
        {
            // Reset the object's position to the starting position
            transform.position = startPos;
        }
    }
}