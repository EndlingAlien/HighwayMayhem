using System.Collections;
using UnityEngine;

public class DeleteParticle : MonoBehaviour
{
    // Called when the object is enabled
    void OnEnable()
    {
        // Start the coroutine to delete the particle after a delay
        StartCoroutine(Delete());
    }

    // Coroutine to handle delayed destruction of the particle
    IEnumerator Delete()
    {
        // Wait for 1 second before proceeding
        yield return new WaitForSeconds(1);

        // Destroy the GameObject this script is attached to
        Destroy(gameObject);
    }
}