using UnityEngine;

public class DespawnObject : MonoBehaviour
{
    // Z-coordinate value below which child objects will be despawned
    float killVector = -40f;

    // Called every frame
    void Update()
    {
        // Iterate through all child objects of the current GameObject
        for (int i = transform.childCount - 1; i >= 0; i--)
        {
            // Get the i-th child
            Transform child = transform.GetChild(i);

            // Check if the child's Z-coordinate is below the despawn threshold
            if (child.position.z < killVector)
            {
                // Destroy the child GameObject
                Destroy(child.gameObject);
            }
        }
    }
}