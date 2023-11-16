using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RepeatClouds : MonoBehaviour
{
    float repeatWidth;
    float speed = 2;
    Vector3 startPos;

    void Start()
    {
        startPos = transform.position;
        repeatWidth = GetComponent<BoxCollider>().size.x / 2;
    }

    void Update()
    {
        transform.Translate(Vector3.left * Time.deltaTime * speed);

        if (transform.position.x < startPos.x - repeatWidth)
        {
            transform.position = startPos;
        }
    }
}
