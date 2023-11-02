using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RepeatHighway : MonoBehaviour
{
    float speed;
    float repeatWidth;
    GameModeController gameMode;

    Vector3 startPos;

    void Start()
    {
        gameMode = FindObjectOfType<GameModeController>();
        speed = gameMode.CurrentGameMode.GetHighwaySpeed();

        startPos = transform.position;
        repeatWidth = GetComponent<BoxCollider>().size.z / 2;
    }

    void Update()
    {
        transform.Translate(Vector3.back * Time.deltaTime * speed);
        if (transform.position.z < startPos.z - repeatWidth)
        {
            transform.position = startPos;
        }
    }
}
