using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPlayer : MonoBehaviour
{
    PlayerController player;
    Vector3 offset = new Vector3(0, 8, -10);

    private void Start() {
        player = FindObjectOfType<PlayerController>();
    }

    void LateUpdate()
    {
        transform.position = player.transform.position + offset;
    }
}
