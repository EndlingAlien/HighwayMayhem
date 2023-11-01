using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawner : MonoBehaviour
{
    [SerializeField] GameObject[] obstaclePrefabs;
    [SerializeField] GameObject[] carPrefabs;
    [SerializeField] Transform[] spawnPoint;
    [SerializeField] Transform despawnObject;

    [SerializeField] float spawnDelay = 2f;
    bool playerAlive= true;

    int laneRange;
    int objectRange;
    int obstacleRange;
    int carRange;

    Transform spawnTransform;
    DeathHandler deathHandler;


    private void Start()
    {
        deathHandler = FindObjectOfType<DeathHandler>();
        StartCoroutine(RangeRandomizer());
    }
    private void Update()
    {
        playerAlive = deathHandler.IsPlayerAlive;
    }

    IEnumerator RangeRandomizer()
    {
        //if player still alive, run 
        while (playerAlive)
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
    }

    private void SpawnObstacle()
    {
        GameObject prefabToSpawn = obstaclePrefabs[obstacleRange];
        GameObject newObstacle = Instantiate(prefabToSpawn, spawnTransform.position, spawnTransform.rotation);

        newObstacle.transform.SetParent(despawnObject.transform);
    }

    private void SpawnCar()
    {
        GameObject prefabToSpawn = carPrefabs[carRange];
        GameObject newCar = Instantiate(prefabToSpawn, spawnTransform.position, spawnTransform.rotation);

        newCar.transform.SetParent(despawnObject.transform);
    }


}
