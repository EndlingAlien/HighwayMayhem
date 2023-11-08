using System.Collections;
using UnityEngine;

public class DeleteParticle : MonoBehaviour
{
    void OnEnable()
    {
        StartCoroutine(Delete());
    }

    IEnumerator Delete()
    {
        yield return new WaitForSeconds(1);
        Destroy(gameObject);
    }
}