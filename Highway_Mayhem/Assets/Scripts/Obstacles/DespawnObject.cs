using UnityEngine;

public class DespawnObject : MonoBehaviour
{
    float killVector = -40f;

    void Update()
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