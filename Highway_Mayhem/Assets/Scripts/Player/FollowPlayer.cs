using UnityEngine;
using Quaternion = UnityEngine.Quaternion;
using Vector3 = UnityEngine.Vector3;

public class FollowPlayer : MonoBehaviour
{
    // References to the player and game mode controllers
    PlayerController player;
    GameModeController gameMode;

    // Offset and rotation vectors used for camera positioning
    Vector3 offset;
    Vector3 rotation;

    void Start()
    {
        // Get references to player and game mode controllers
        gameMode = FindObjectOfType<GameModeController>();
        player = FindObjectOfType<PlayerController>();
    }

    void Update()
    {
        // Check the current game mode and adjust camera offset accordingly
        CheckGameMode();
    }

    void CheckGameMode()
    {
        // Switch statement to determine the current game mode and apply the corresponding camera offset
        switch (gameMode.CurrentGameMode.GetName())
        {
            case "Tiny":
                TinyOffset();
                break;

            case "FirstPerson":
                FirstOffset();
                break;

            case "TopDown":
                TopOffset();
                break;

            case "Mighty":
                MightyOffset();
                break;

            case "Trippy":
                TrippyOffset();
                break;

            default:
                DefaultOffset();
                break;
        }
    }

    #region Offset Methods

    // Camera offset for the Tiny game mode
    void TinyOffset()
    {
        rotation = new Vector3(20, 0, 0);
        offset = new Vector3(0, 4, -5);

        // Set camera position and rotation based on offset and rotation vectors
        transform.SetPositionAndRotation(player.transform.position + offset, Quaternion.Euler(rotation));
    }

    // Camera offset for the FirstPerson game mode
    void FirstOffset()
    {
        rotation = new Vector3(20, 0, 0);
        offset = new Vector3(0, 5, 0);

        // Set camera position and rotation based on offset and rotation vectors
        transform.SetPositionAndRotation(player.transform.position + offset, Quaternion.Euler(rotation));
    }

    // Camera offset for the TopDown game mode
    void TopOffset()
    {
        // Get the main camera component and set it to orthographic mode with specific settings
        Camera mainCamera = GetComponent<Camera>();
        mainCamera.orthographic = true;
        mainCamera.orthographicSize = 20;
        mainCamera.nearClipPlane = -25;

        rotation = new Vector3(90, 0, 0);
        offset = new Vector3(7.5f, 35, 15);

        // Set camera position and rotation based on offset and rotation vectors
        transform.SetPositionAndRotation(offset, Quaternion.Euler(rotation));
    }

    // Camera offset for the Mighty game mode
    void MightyOffset()
    {
        rotation = new Vector3(33, 0, 0);
        offset = new Vector3(7.5f, 24, -10);

        // Set camera position and rotation based on offset and rotation vectors
        transform.SetPositionAndRotation(offset, Quaternion.Euler(rotation));
    }

    // Camera offset for the Trippy game mode
    void TrippyOffset()
    {
        // Get the main camera component and set it to orthographic mode with specific settings
        Camera mainCamera = GetComponent<Camera>();
        mainCamera.orthographic = true;
        mainCamera.orthographicSize = 13;
        mainCamera.nearClipPlane = -50;

        rotation = new Vector3(10, 0, 0);
        offset = new Vector3(7.5f, 15, -7);

        // Set camera position and rotation based on offset and rotation vectors
        transform.SetPositionAndRotation(offset, Quaternion.Euler(rotation));
    }

    // Default camera offset
    void DefaultOffset()
    {
        rotation = new Vector3(25, 0, 0);
        offset = new Vector3(0, 8, -10);

        // Scale the offset based on the player's scale
        Vector3 scaledOffset = new Vector3(offset.x * player.transform.localScale.x, offset.y * player.transform.localScale.y, offset.z * player.transform.localScale.z);

        // Set camera position and rotation based on scaled offset and rotation vectors
        transform.SetPositionAndRotation(player.transform.position + scaledOffset, Quaternion.Euler(rotation));
    }

    #endregion
}