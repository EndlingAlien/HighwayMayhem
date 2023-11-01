using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RepeatHighway : MonoBehaviour
{
     public float speed = 20f;
    Vector3 startPos;
    float repeatWidth;

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
