using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawner : MonoBehaviour
{
    #region Variables

    // Prefabs for obstacles and cars
    [Header("Prefabs")]
    [Tooltip("All obstacle prefabs you want to instantiate")]
    [SerializeField] GameObject[] obstaclePrefabs;
    [Tooltip("All car prefabs you want to instantiate")]
    [SerializeField] GameObject[] carPrefabs;
    [Space(10)]

    // Spawn points for the prefabs
    [Header("Spawn Config")]
    [Tooltip("Spawn Points for above prefabs")]
    [SerializeField] Transform[] spawnPoint;
    [Space(10)]

    // Parent transform for instantiated prefabs
    [Header("Prefab Parent")]
    [Tooltip("Assign each prefab as a child to this Gameobject")]
    [SerializeField] Transform despawnObject;

    // Random range variables for choosing lanes, objects, obstacles, and cars
    int laneRange;
    int objectRange;
    int obstacleRange;
    int carRange;

    // Lane randomization history
    Queue<int> laneHistory = new Queue<int>();
    int maxHistoryLength = 5;
    int previousLane = -1;

    // Spawn transform
    Transform spawnTransform;

    // DeathHandler reference
    DeathHandler deathHandler;
    bool playerAlive = true;

    // GameMode
    float spawnDelay;
    GameModeController gameMode;

    #endregion

    void Start()
    {
        // Initialize references and settings
        deathHandler = FindObjectOfType<DeathHandler>();
        gameMode = FindObjectOfType<GameModeController>();
        spawnDelay = gameMode.CurrentGameMode.GetObstacleSpawnDelay();

        // Start the coroutine for randomizing ranges
        StartCoroutine(RangeRandomizer());
    }

    void Update()
    {
        // Check if the player is still alive
        playerAlive = deathHandler.IsPlayerAlive;
    }

    IEnumerator RangeRandomizer()
    {
        // Coroutine to randomize ranges and spawn objects
        while (playerAlive)
        {
            objectRange = Random.Range(1, 3);
            laneRange = Random.Range(0, 4);
            obstacleRange = Random.Range(0, 9);
            carRange = Random.Range(0, 12);

            // Spawn the chosen object
            SpawnObject();

            // Wait for the specified spawn delay before the next iteration
            yield return new WaitForSeconds(spawnDelay);
        }
    }

    #region Check Random Numbers

    void SpawnObject()
    {
        // Check the chosen lane and spawn the object if there are spawn points
        CheckLaneChoice();

        if (spawnPoint != null)
        {
            // Check the chosen object type and spawn either obstacle or car
            CheckObjectChoice();
        }
    }

    void CheckLaneChoice()
    {
        // Randomize the lane while avoiding repetitions in recent history
        int maxAttempts = 4;
        int currentAttempt = 0;

        do
        {
            laneRange = Random.Range(0, 4);

            if (laneRange != previousLane)
            {
                if (!laneHistory.Contains(laneRange))
                {
                    laneHistory.Enqueue(laneRange);
                    if (laneHistory.Count > maxHistoryLength)
                    {
                        laneHistory.Dequeue();
                    }
                    previousLane = laneRange;
                    break;
                }
            }
            currentAttempt++;
        }
        while (currentAttempt < maxAttempts);

        // Clear history and reset previous lane if the maximum attempts are reached
        if (currentAttempt >= maxAttempts)
        {
            laneHistory.Clear();
            previousLane = -1;
        }

        // Get the spawn transform based on the chosen lane
        spawnTransform = spawnPoint[laneRange].GetComponent<Transform>();
    }

    void CheckObjectChoice()
    {
        // Check the chosen object type and spawn either obstacle or car
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
        // Instantiate and set the spawned obstacle as a child of the despawn object
        GameObject prefabToSpawn = obstaclePrefabs[obstacleRange];
        GameObject newObstacle = Instantiate(prefabToSpawn, spawnTransform.position, spawnTransform.rotation);
        newObstacle.transform.SetParent(despawnObject.transform);
    }

    void SpawnCar()
    {
        // Instantiate and set the spawned car as a child of the despawn object
        GameObject prefabToSpawn = carPrefabs[carRange];
        GameObject newCar = Instantiate(prefabToSpawn, spawnTransform.position, spawnTransform.rotation);
        newCar.transform.SetParent(despawnObject.transform);
    }

    #endregion
}