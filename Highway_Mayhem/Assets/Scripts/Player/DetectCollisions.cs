using UnityEngine;

public class DetectCollisions : MonoBehaviour
{
    #region Variables

    [Tooltip("Explosion attached to player")]
    [SerializeField] ParticleSystem explosion;

    //Scripts
    DeathHandler deathHandler;
    UIController uiScript;

    //GameMode
    GameModeController gameMode;
    bool hasHealth;
    float playerHealth;
    public float PlayerHealth { get { return playerHealth; } }

    #endregion

    void Start()
    {
        deathHandler = FindObjectOfType<DeathHandler>();
        uiScript = FindObjectOfType<UIController>();
        gameMode = FindObjectOfType<GameModeController>();

        hasHealth = gameMode.CurrentGameMode.GetPlayerHasHealth();

        if (hasHealth)
        {
            playerHealth = gameMode.CurrentGameMode.GetPlayerHealth();
        }
    }

    void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.tag == "Obstacle")
        {
            explosion.Play();
            Destroy(other.gameObject);
            if (hasHealth)
            {
                ProcessHealth("Obstacle");
            }
            else
            {
                deathHandler.ActivateGameOver();
            }
        }
        else if (other.gameObject.CompareTag("Car"))
        {
            explosion.Play();
            Destroy(other.gameObject);
            if (hasHealth)
            {
                ProcessHealth("Car");
            }
            else
            {
                deathHandler.ActivateGameOver();
            }
        }
    }

    void ProcessHealth(string enemy)
    {
        if (enemy == "Obstacle")
        {
            playerHealth--;
            uiScript.DisplayHealthBar(playerHealth);
            if (playerHealth <= 0)
            {
                deathHandler.ActivateGameOver();
            }
        }
        else if (enemy == "Car")
        {
            playerHealth -= 2;
            uiScript.DisplayHealthBar(playerHealth);
            if (playerHealth <= 0)
            {
                deathHandler.ActivateGameOver();
            }
        }
    }
}