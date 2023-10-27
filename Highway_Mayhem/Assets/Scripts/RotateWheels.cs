using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateWheels : MonoBehaviour
{
   float speed = 10f;

    void Update()
    {
        transform.Rotate(Vector3.right * speed);
    }
}
