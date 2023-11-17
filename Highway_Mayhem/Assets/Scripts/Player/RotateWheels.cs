using UnityEngine;

public class RotateWheels : MonoBehaviour
{
    // Speed of rotation
    float speed = 10f;

    // Update is called once per frame
    void Update()
    {
        // Rotate the object around the right axis based on the speed
        transform.Rotate(Vector3.right * speed * Time.deltaTime);
    }
}