using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhonkBlueSpawner : MonoBehaviour
{
    public GameObject BlueCubeToSpawn;
    //Set the size of the spawn area
    public Vector3 spawnAreaSize = new Vector3(10f, 0f, 10f);


    //Set the interval between object spawns
    public float spawnInterval = 3f;
    //Timer for tracking spawn intervals
    private float spawnTimer = 0f;
    //Set Spawn Delays
    [SerializeField]
    private float spawnDelayRed = 3f;
    private float setTimer;
    private float breakDelay;
    //Can Spawn Bool
    private bool readyToSpawn = false;


    private GameObject spawnedObject; // Reference to the spawned object

    private void Start()
    {
        setTimer = spawnDelayRed;

    }

    private void Update()
    {
        //setup Timers
        spawnDelayRed -= Time.deltaTime;
        spawnTimer += Time.deltaTime;
        breakDelay += Time.deltaTime;

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

        if (spawnDelayRed < 0f)
        {
            ReadyToSpawn();
            spawnDelayRed = 30f;
            Debug.Log(readyToSpawn);
        }
    }

    private void SpawnBlockRed()
    {
        //Spawn and Rotate block towards the player
        Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-spawnAreaSize.x / 2f, spawnAreaSize.x / 2f), 0f, Random.Range(-spawnAreaSize.z / 2f, spawnAreaSize.z / 2f));
        spawnedObject = Instantiate(BlueCubeToSpawn, randomSpawnPoint, Quaternion.identity);
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
}
