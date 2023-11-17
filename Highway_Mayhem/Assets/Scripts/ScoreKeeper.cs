using TMPro;
using UnityEngine;

public class ScoreKeeper : MonoBehaviour
{
    // Variables
    [Tooltip("Reference to the TextMeshProUGUI for displaying the score")]
    [SerializeField] TextMeshProUGUI scoreText;

    DeathHandler deathHandler; // Reference to the DeathHandler script
    float elapsedTime = 0.0f; // Elapsed time since the start
    int pointsPerSecond = 100; // Points gained per second

    int points = 0; // Current score
    public int Points() { return points; } // Public method to get the current score

    void Start()
    {
        // Initialize references and reset values
        deathHandler = FindObjectOfType<DeathHandler>();
        elapsedTime = 0.0f;
        points = 0;
        // Set the initial score text
        scoreText.text = "Score: 0";
    }

    void Update()
    {
        // Update score only if the player is alive
        if (deathHandler.IsPlayerAlive)
        {
            UpdateTimePoints();
        }
        // Update the displayed score
        scoreText.text = "Score: " + points;
    }

    // Update points based on elapsed time
    void UpdateTimePoints()
    {
        elapsedTime += Time.deltaTime;
        points = Mathf.FloorToInt(elapsedTime * pointsPerSecond);
    }

    // Method to update the score from other scripts
    public void UpdateScore(int value)
    {
        points += value;
        scoreText.text = "Score: " + points;
    }
}