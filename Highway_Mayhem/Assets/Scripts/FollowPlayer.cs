using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPlayer : MonoBehaviour
{
    //create a reference to a gameObject
    public GameObject player;

    //variable to have camera follow behind
    private Vector3 offset = new Vector3(0, 8, -17);

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    //lateUpdate will be called after Update, camera wont stutter anymore
    void LateUpdate()
    {
        //offset the camera to follow behind player, after +
        transform.position = player.transform.position + offset;

    }
}
