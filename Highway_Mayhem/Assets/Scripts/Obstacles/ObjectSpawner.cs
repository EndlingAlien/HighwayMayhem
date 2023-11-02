using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawner : MonoBehaviour
{
    #region Variables
    [Header("Prefabs")]
    [Tooltip("All obstacle prefabs you want to instantiate")]
    [SerializeField] GameObject[] obstaclePrefabs;
    [Tooltip("All car prefabs you want to instantiate")]
    [SerializeField] GameObject[] carPrefabs;
    [Space(10)]

    [Header("Spawn Config")]
    [Tooltip("Spawn Points for above prefabs")]
    [SerializeField] Transform[] spawnPoint;
    [Space(10)]

    [Header("Prefab Parent")]
    [Tooltip("Assign each prefab as a child to this Gameobject")]
    [SerializeField] Transform despawnObject;

    //Random Range Variables
    int laneRange;
    int objectRange;
    int obstacleRange;
    int carRange;
    //bool variables
    bool playerAlive = true;
    //script variables
    Transform spawnTransform;
    DeathHandler deathHandler;
    //GameMde Variables
    float spawnDelay;
    GameModeController gameMode;
    #endregion

    void Start()
    {
        deathHandler = FindObjectOfType<DeathHandler>();
        gameMode = FindObjectOfType<GameModeController>();
        spawnDelay = gameMode.CurrentGameMode.GetObstacleSpawnDelay();

        StartCoroutine(RangeRandomizer());
    }

    void Update()
    {
        playerAlive = deathHandler.IsPlayerAlive;
    }

    IEnumerator RangeRandomizer()
    {
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

    #region Check Random Numbers
    void SpawnObject()
    {
        CheckLaneChoice();

        if (spawnPoint != null)
        {
            CheckObjectChoice();
        }
    }

    void CheckLaneChoice()
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
    #endregion

    #region Spawn Methods
    void SpawnObstacle()
    {
        GameObject prefabToSpawn = obstaclePrefabs[obstacleRange];
        GameObject newObstacle = Instantiate(prefabToSpawn, spawnTransform.position, spawnTransform.rotation);

        newObstacle.transform.SetParent(despawnObject.transform);
    }

    void SpawnCar()
    {
        GameObject prefabToSpawn = carPrefabs[carRange];
        GameObject newCar = Instantiate(prefabToSpawn, spawnTransform.position, spawnTransform.rotation);

        newCar.transform.SetParent(despawnObject.transform);
    }
    #endregion

}
