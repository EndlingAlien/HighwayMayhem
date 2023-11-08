using TMPro;
using UnityEngine;

public class ScoreKeeper : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI scoreText;
    DeathHandler deathHandler;

    float elapsedTime = 0.0f;
    int pointsPerSecond = 100;
    int points = 0;
    public int Points() { return points; }

    void Start()
    {
        deathHandler = FindObjectOfType<DeathHandler>();

        elapsedTime = 0.0f;
        points = 0;
        scoreText.text = "Score: 0";
    }

    void Update()
    {
        if (deathHandler.IsPlayerAlive)
        {
            UpdateTimePoints();
        }
        scoreText.text = "Score: " + points;
    }

    void UpdateTimePoints()
    {
        elapsedTime += Time.deltaTime;
        points = Mathf.FloorToInt(elapsedTime * pointsPerSecond);
    }

    //for other scripts
    public void UpdateScore(int value)
    {
        points += value;
        scoreText.text = "Score: " + points;
    }
}