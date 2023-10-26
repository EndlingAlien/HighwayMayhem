using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwitchCam : MonoBehaviour
{
    public GameObject cam1;
    public GameObject cam2;


    //private Vector3 Firstoffset = new Vector3(0, 4.3f, -7);

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.X))
        {
            cam1.SetActive(true);
            cam2.SetActive(false);
        }
        if (Input.GetKeyDown(KeyCode.C))
        {
            cam1.SetActive(false);
            cam2.SetActive(true);
        }

    }
}
