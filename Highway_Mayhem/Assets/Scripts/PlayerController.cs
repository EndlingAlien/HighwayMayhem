using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    //this is a variable
    public float speed = 5.0f;

    //turn the vehicle
    public float turnSpeed = 100;
    private float horizontalInput;
    private float verticalInput;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        horizontalInput = Input.GetAxis("Horizontal");
        verticalInput = Input.GetAxis("Vertical");
        //move vehicle forward
        //super simple easy way, not very good tho
        //transform.Translate(0, 0, 1);

        //way better, but cant control speed
        //transform.Translate(Vector3.forward);

        //most effective, can control speed with time
        transform.Translate(Vector3.forward * Time.deltaTime * speed * verticalInput);

        //turn the vehicle left and right
        //transform.Translate(Vector3.right * Time.deltaTime * turnSpeed * horizontalInput);

        //make the car rotate as you turn
        transform.Rotate(Vector3.up, Time.deltaTime * turnSpeed * horizontalInput);
    }
}
