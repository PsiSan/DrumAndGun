using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OrbSpawner : MonoBehaviour
{
    public GameObject Orb;

    //Set the size of the spawn area
    public Vector3 orbSpawnAreaSize = new Vector3(0f, 0f, 0f);


    //Set the interval between object spawns
    public float orbSpawnInterval = 3f;
    //Timer for tracking spawn intervals
    private float orbSpawnTimer = 0f;

    private GameObject spawnedObject; // Reference to the spawned object

    private void Update()
    {
        orbSpawnTimer += Time.deltaTime;

        if (orbSpawnTimer >= orbSpawnInterval)
        {
            SpawnOrbs();
            orbSpawnTimer = 0f;
        }

        if (spawnedObject != null)
        {

        }
    }

    //Spwan and RootateOrbs
    private void SpawnOrbs()
    {
        Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-orbSpawnAreaSize.x / 2f, orbSpawnAreaSize.x / 2f), 0f, Random.Range(-orbSpawnAreaSize.z / 2f, orbSpawnAreaSize.z / 2f));

        spawnedObject = Instantiate(Orb, randomSpawnPoint, Quaternion.identity);
    }
}
