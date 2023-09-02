using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnAndMoveObjects : MonoBehaviour
{
    public GameObject RedCubeToSpawn;
    public GameObject BlueCubeToSpawn;

    //Set the size of the spawn area
    public Vector3 spawnAreaSize = new Vector3(10f, 0f, 10f);


    //Set the interval between object spawns
    public float spawnInterval = 3f;
    //Timer for tracking spawn intervals
    private float spawnTimer = 0f;

    private GameObject spawnedObject; // Reference to the spawned object

    private void Update()
    {
        spawnTimer += Time.deltaTime;

        if (spawnTimer >= spawnInterval)
        {
            SpawnBlockRed();
            SpawnBlockBlue();
            spawnTimer = 0f;
        }

        if (spawnedObject != null)
        {
          
        }
    }

    private void SpawnBlockRed()
    {
        Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-spawnAreaSize.x / 2f, spawnAreaSize.x / 2f),0f, Random.Range(-spawnAreaSize.z / 2f, spawnAreaSize.z / 2f));

        spawnedObject = Instantiate(RedCubeToSpawn, randomSpawnPoint, Quaternion.identity);
    }
    private void SpawnBlockBlue()
    {
        Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-spawnAreaSize.x / 2f, spawnAreaSize.x / 2f), 0f, Random.Range(-spawnAreaSize.z / 2f, spawnAreaSize.z / 2f));

        spawnedObject = Instantiate(BlueCubeToSpawn, randomSpawnPoint, Quaternion.identity);
    }

}
