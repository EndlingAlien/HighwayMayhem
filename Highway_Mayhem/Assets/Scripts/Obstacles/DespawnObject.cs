using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DespawnObject : MonoBehaviour
{
    [SerializeField] float killVector = -40f;

    private void Update()
    {
        for (int i = transform.childCount - 1; i >= 0; i--)
        {
            Transform child = transform.GetChild(i);

            if (child.position.z < killVector)
            {
                Destroy(child.gameObject);
            }
        }
    }
}

