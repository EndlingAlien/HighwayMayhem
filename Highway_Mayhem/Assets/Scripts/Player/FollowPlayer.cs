using UnityEngine;

public class FollowPlayer : MonoBehaviour
{
    PlayerController player;
    Vector3 offset = new Vector3(0, 8, -10);
    Vector3 rotation = new Vector3(30, 0, 0);

    void Start()
    {
        player = FindObjectOfType<PlayerController>();
    }

    void LateUpdate()
    {
        Vector3 scaledOffset = new Vector3(offset.x * player.transform.localScale.x, offset.y * player.transform.localScale.y, offset.z * player.transform.localScale.z);
        transform.SetPositionAndRotation(player.transform.position + scaledOffset, Quaternion.Euler(rotation));
    }
}
