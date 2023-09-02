using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour
{
    //Enemy Block to Spawn
    [SerializeField]
    private GameObject enemySpehere;

    //Setup Block SpawnArea
    [SerializeField]
    private Vector3 areaSpawnSize;

    //Setup Delay Timers so spheres dont spawn ontop of each other
    [SerializeField]
    private float delayEnemySphere;

    //Spawn Frequencies
    [SerializeField]
    private float spawnFreqEnemy;

    //Setup Timers
    [SerializeField]
    private float spawnTimerEnemy;

    //Setup Interval Timers
    [SerializeField]
    private float StartSpawn1;
    [SerializeField]
    private float StopSpawn1;

    //Setup EnableSpawn bool
    [SerializeField]
    private bool EnableSpawn = false;

    // Reference to the spawned object
    private GameObject spawnedObject;




    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Timers();
        if (EnableSpawn == true)
        {
            if (spawnTimerEnemy >= spawnFreqEnemy)
            {
                SpawnEnemy();
                spawnTimerEnemy = 0f - delayEnemySphere;
            }
        }

        if (StartSpawn1 <= 0)
        {
            EnableSpawn = true;
            StartSpawn1 = 999f;
        }
        if (StopSpawn1 <= 0)
        {
            EnableSpawn = false;
            StartSpawn1 = 999f;
        }

    }


    void Timers()
    {
        spawnTimerEnemy += Time.deltaTime;
        StartSpawn1 -= Time.deltaTime;
        StopSpawn1 -= Time.deltaTime;

    }
    private void SpawnEnemy()
    {
        Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-areaSpawnSize.x / 2f, areaSpawnSize.x / 2f), 0f, Random.Range(-areaSpawnSize.z / 2f, areaSpawnSize.z / 2f));

        spawnedObject = Instantiate(enemySpehere, randomSpawnPoint, Quaternion.identity);
    }
}
