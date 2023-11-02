using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RepeatHighway : MonoBehaviour
{
    float speed = 20f;
    float repeatWidth;

    Vector3 startPos;

    void Start()
    {
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
