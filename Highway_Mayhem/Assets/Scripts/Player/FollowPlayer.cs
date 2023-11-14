using UnityEngine;
using Quaternion = UnityEngine.Quaternion;
using Vector3 = UnityEngine.Vector3;

public class FollowPlayer : MonoBehaviour
{
    PlayerController player;
    GameModeController gameMode;

    Vector3 offset;
    Vector3 rotation;

    void Start()
    {
        gameMode = FindObjectOfType<GameModeController>();
        player = FindObjectOfType<PlayerController>();
    }

    void Update()
    {
        CheckGameMode();
    }

    void CheckGameMode()
    {
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

    void TinyOffset()
    {
        rotation = new Vector3(20, 0, 0);
        offset = new Vector3(0, 4, -5);

        transform.SetPositionAndRotation(player.transform.position + offset, Quaternion.Euler(rotation));
    }

    void FirstOffset()
    {
        rotation = new Vector3(20, 0, 0);
        offset = new Vector3(0, 5, 0);

        transform.SetPositionAndRotation(player.transform.position + offset, Quaternion.Euler(rotation));
    }

    void TopOffset()
    {
        Camera mainCamera = GetComponent<Camera>();
        mainCamera.orthographic = true;
        mainCamera.orthographicSize = 20;
        mainCamera.nearClipPlane = -25;

        rotation = new Vector3(90, 0, 0);
        offset = new Vector3(7.5f, 35, 15);

        transform.SetPositionAndRotation(offset, Quaternion.Euler(rotation));
    }

    void MightyOffset()
    {
        rotation = new Vector3(33, 0, 0);
        offset = new Vector3(7.5f, 24, -10);

        transform.SetPositionAndRotation(offset, Quaternion.Euler(rotation));
    }

    void TrippyOffset()
    {
        Camera mainCamera = GetComponent<Camera>();
        mainCamera.orthographic = true;
        mainCamera.orthographicSize = 13;
        mainCamera.nearClipPlane = -50;

        Vector3 rotation = new Vector3(10, 0, 0);
        Vector3 offset = new Vector3(7.5f, 15, -7);

        transform.SetPositionAndRotation(offset, Quaternion.Euler(rotation));
    }

    void DefaultOffset()
    {
        Vector3 rotation = new Vector3(25, 0, 0);
        Vector3 offset = new Vector3(0, 8, -10);

        Vector3 scaledOffset = new Vector3(offset.x * player.transform.localScale.x, offset.y * player.transform.localScale.y, offset.z * player.transform.localScale.z);
        transform.SetPositionAndRotation(player.transform.position + scaledOffset, Quaternion.Euler(rotation));
    }

    #endregion
}