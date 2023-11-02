using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPlayer : MonoBehaviour
{
    //when player scale is defferent than default, offset is messed up
    PlayerController player;
    Vector3 offset = new Vector3(0, 8, -10);
    Vector3 rotation = new Vector3(30, 0, 0);

    void Start()
    {
        player = FindObjectOfType<PlayerController>();
    }

    void LateUpdate()
    {
        transform.SetPositionAndRotation(player.transform.position + offset, Quaternion.Euler(rotation));
    }
}
