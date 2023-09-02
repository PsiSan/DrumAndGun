using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EasyRedSpawner : MonoBehaviour
{
    public GameObject RedCubeToSpawn;
    //Set the size of the spawn area
    public Vector3 spawnAreaSize = new Vector3(0f, 0f, 0f);


    //Set the interval between object spawns
    public float spawnInterval = 3f;
    //Timer for tracking spawn intervals
    private float spawnTimer = 0f;

    //Set Spawn Delays
    [SerializeField]
    private float spawnOneRed = 3f;
    private float setDelayTimer;
    private float setStop1Timer;
    private float setStop2Timer;
    private float setStop3Timer;
    private float setStart1Timer;
    private float setStart2Timer;
    private float setStart3Timer;

    [SerializeField]
    private float stopSpawningAt1;
    [SerializeField]
    private float startSpawningAt1;

    [SerializeField]
    private float stopSpawningAt2;
    [SerializeField]
    private float startSpawningAt2;

    [SerializeField]
    private float stopSpawningAt3;
    [SerializeField]
    private float startSpawningAt3;

    //Can Spawn Bool
    private bool readyToSpawn = false;


    private GameObject spawnedObject; // Reference to the spawned object

    private void Start()
    {
        StartTimers();
    }

    private void Update()
    {
        //setup Timers
        spawnOneRed -= Time.deltaTime;
        stopSpawningAt1 -= Time.deltaTime;
        stopSpawningAt2 -= Time.deltaTime;
        stopSpawningAt3 -= Time.deltaTime;
        startSpawningAt1 -= Time.deltaTime;
        startSpawningAt2 -= Time.deltaTime;
        startSpawningAt3 -= Time.deltaTime;

        spawnTimer += Time.deltaTime;
       

        //Spawn Blocks if conditions are met
        if (readyToSpawn == true)
        {
            if (spawnTimer >= spawnInterval)
            {
                SpawnBlockRed();
                spawnTimer = 0f;
            }

            if (spawnedObject != null)
            {

            }
        }
        //The amount of time before block Spawning is turned on at the start
        if (spawnOneRed <= 0f)
        {

            SpawnBlockRed();
            //ReadyToSpawn();
            spawnOneRed = 999f;
            Debug.Log(readyToSpawn);
        }

        // The first time the block spawning is turned off and on 
        if (stopSpawningAt1 <= 0f)
        {
            readyToSpawn = false;
            stopSpawningAt1 = 999f;
            Debug.Log(readyToSpawn);
        }
        if (startSpawningAt1 <= 0f)
        {
            readyToSpawn = true;
            startSpawningAt1 = 999f;
            Debug.Log(readyToSpawn);
        }
        // The second time the block spawning is turned off and on
        if (stopSpawningAt2 <= 0f)
        {
            readyToSpawn = false;
            stopSpawningAt2 = 999f;
            Debug.Log(readyToSpawn);
        }
        if (startSpawningAt2 <= 0f)
        {
            readyToSpawn = true;
            startSpawningAt2 = 999f;
            Debug.Log(readyToSpawn);
        }
        // The third time the block spawning is turned off and on
        if (stopSpawningAt3 <= 0f)
        {
            readyToSpawn = false;
            stopSpawningAt3 = 999f;
            Debug.Log(readyToSpawn);

        }
        if (startSpawningAt1 <= 0f)
        {
            readyToSpawn = true;
            startSpawningAt3 = 999f;
            Debug.Log(readyToSpawn);
        }

    }

    private void SpawnBlockRed()
    {
        //Spawn and Rotate block towards the player
        Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-spawnAreaSize.x / 2f, spawnAreaSize.x / 2f), 0f, Random.Range(-spawnAreaSize.z / 2f, spawnAreaSize.z / 2f));
        spawnedObject = Instantiate(RedCubeToSpawn, randomSpawnPoint, Quaternion.identity);
    }

    private void ReadyToSpawn()
    {
        if (readyToSpawn != true)
        {
            readyToSpawn = true;
        }
        else
            readyToSpawn = false;
    }
    private void StartTimers()
    {

        setDelayTimer = spawnOneRed;
        setStop1Timer = stopSpawningAt1;
        setStop2Timer = stopSpawningAt2;
        setStop3Timer = stopSpawningAt3;
        setStart1Timer = startSpawningAt1;
        setStart2Timer = startSpawningAt2;
        setStart3Timer = startSpawningAt3;
    }
}
