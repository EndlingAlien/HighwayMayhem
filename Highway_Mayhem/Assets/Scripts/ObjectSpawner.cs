using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawner : MonoBehaviour
{
    [SerializeField] GameObject[] obstaclePrefabs;
    [SerializeField] GameObject[] carPrefabs;
    [SerializeField] Transform[] spawnPoint;

    [SerializeField] float spawnDelay = 2f;

    int laneRange;
    int objectRange;
    int obstacleRange;
    int carRange;

    Transform spawnTransform;


    private void Start()
    {
        StartCoroutine(RangeRandomizer());
    }

    IEnumerator RangeRandomizer()
    {
        //if player still alive, run 
       while(true)
       {
        objectRange = Random.Range(1, 3);
        laneRange = Random.Range(0, 4);
        obstacleRange = Random.Range(0, 9);
        carRange = Random.Range(0, 12);

        SpawnObject();

        yield return new WaitForSeconds(spawnDelay);
       }
    }

    void SpawnObject()
    {
        CheckLaneChoice();

        if (spawnPoint != null)
        {
            CheckObjectChoice();
        }
    }

    private void CheckLaneChoice()
    {
        Debug.Log(laneRange);
       spawnTransform = spawnPoint[laneRange].GetComponent<Transform>();
    }

    void CheckObjectChoice()
    {
        if (objectRange == 1)
        {
            SpawnObstacle();
        }
        else if (objectRange == 2)
        {
            SpawnCar();
        }
        else
        {
            Debug.Log("ERROR NULL OBJECT RANGE");
        }
    }

    private void SpawnObstacle()
    {
        GameObject prefabToSpawn = obstaclePrefabs[obstacleRange];
        Debug.Log("spawning obstacle Num: " + obstacleRange);

        Instantiate(prefabToSpawn, spawnTransform.position, spawnTransform.rotation);
    }

    private void SpawnCar()
    {
        GameObject prefabToSpawn = carPrefabs[carRange];
        Debug.Log("spawning Car Num: " + carRange);

        Instantiate(prefabToSpawn, spawnTransform.position, spawnTransform.rotation);
    }


}
