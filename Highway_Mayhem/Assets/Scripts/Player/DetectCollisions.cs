using UnityEngine;

public class DetectCollisions : MonoBehaviour
{
    #region Variables

    // Particle system for crash explosion
    [Tooltip("Explosion attached to player")]
    [SerializeField] ParticleSystem crashExplosion;

    // Particle system for death explosion
    [SerializeField] ParticleSystem deathExplosion;

    // Audio source for crash sound
    [SerializeField] AudioSource crashAudio;

    // Scripts
    DeathHandler deathHandler;
    UIController uiScript;
    SettingsData settingsData;

    // GameMode
    GameModeController gameMode;
    bool hasHealth;
    float playerHealth;
    public float PlayerHealth { get { return playerHealth; } }

    #endregion

    void Start()
    {
        // Get references and initialize variables
        FindScripts();

        // Check if the player has health in the current game mode
        hasHealth = gameMode.CurrentGameMode.GetPlayerHasHealth();

        // If the player has health, set the initial player health value
        if (hasHealth)
        {
            playerHealth = gameMode.CurrentGameMode.GetPlayerHealth();
        }
    }

    void FindScripts()
    {
        deathHandler = FindObjectOfType<DeathHandler>();
        uiScript = FindObjectOfType<UIController>();
        gameMode = FindObjectOfType<GameModeController>();
        settingsData = FindObjectOfType<SettingsData>();
    }

    void OnCollisionEnter(Collision other)
    {
        // Check collision with obstacles
        if (other.gameObject.tag == "Obstacle")
        {
            // Destroy the obstacle
            Destroy(other.gameObject);

            // Process health based on the type of collision
            if (hasHealth)
            {
                ProcessHealth("Obstacle");
            }
            else
            {
                // If the player doesn't have health, activate game over
                deathHandler.ActivateGameOver();
                deathExplosion.Play();
            }
        }
        // Check collision with cars
        else if (other.gameObject.CompareTag("Car"))
        {
            // Destroy the car
            Destroy(other.gameObject);

            // Process health based on the type of collision
            if (hasHealth)
            {
                ProcessHealth("Car");
            }
            else
            {
                // If the player doesn't have health, activate game over
                deathHandler.ActivateGameOver();
                deathExplosion.Play();
            }
        }
    }

    // Process health based on the type of collision
    void ProcessHealth(string enemy)
    {
        if (enemy == "Obstacle")
        {
            // Decrease player health, update UI, play crash sound and explosion
            playerHealth--;
            uiScript.DisplayHealthBar(playerHealth);
            if (settingsData.SoundFxBool)
            {
                crashAudio.Play();
            }
            crashExplosion.Play();

            // Check if player health is depleted
            if (playerHealth <= 0)
            {
                deathHandler.ActivateGameOver();
                deathExplosion.Play();
            }
        }
        else if (enemy == "Car")
        {
            // Decrease player health (greater decrement for car collision), update UI, play crash sound and explosion
            playerHealth -= 2;
            uiScript.DisplayHealthBar(playerHealth);
            if (settingsData.SoundFxBool)
            {
                crashAudio.Play();
            }
            crashExplosion.Play();

            // Check if player health is depleted
            if (playerHealth <= 0)
            {
                deathHandler.ActivateGameOver();
                deathExplosion.Play();
            }
        }
    }
}