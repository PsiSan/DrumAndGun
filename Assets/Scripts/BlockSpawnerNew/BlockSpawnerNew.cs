using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockSpawnerNew : MonoBehaviour
{
    //Setup Blocks to Spawn
    [SerializeField]
    private GameObject redBlock;
    [SerializeField]
    private GameObject blueBlock;

    //Setup Block SpawnArea
    [SerializeField]
    private Vector3 areaSpawnSize;

    //Setup Delay Timers so blocks dont spawn ontop of each other
    [SerializeField]
    private float delayBlockRed;
    [SerializeField]
    private float delayBlockBlue;

    //Spawn Frequencies 
    [SerializeField]
    private float spawnFreqRed;
    [SerializeField]
    private float spawnFreqBlue;

    //Setup Timers
    [SerializeField]
    private float spawnTimerRed;
    [SerializeField]
    private float spawnTimerBlue;

    //--------Setup Interval Timers-----------
    [SerializeField]
    private float StartSpawn1;
    [SerializeField]
    private float StopSpawn1;

    [SerializeField]
    private float StartSpawn2;
    [SerializeField]
    private float StopSpawn2;

    [SerializeField]
    private float StartSpawn3;
    [SerializeField]
    private float StopSpawn3;

    [SerializeField]
    private float StartSpawn4;
    [SerializeField]
    private float StopSpawn4;

    [SerializeField]
    private float StartSpawn5;
    [SerializeField]
    private float StopSpawn5;
    //--------Setup Interval Timers-----------

    //Setup EnableSpawn bool
    private bool EnableSpawn = false;

    // Reference to the spawned object
    private GameObject spawnedObject;



    private void Start()
    {
        //spawnTimerBlue = spawnTimerBlue - delayBlockBlue;
        //spawnTimerRed = spawnTimerRed - delayBlockRed;
        //Call AudioManager to check if can play Song
        AudioManager.FindObjectOfType<AudioManager>().PlayLetsGO();
        AudioManager.FindObjectOfType<AudioManager>().StartAmbience();

    }



    // Update is called once per frame
    void Update()
    {

        //Starts the timers
        Timers();
        //Check if is able to spawn and then run the spawnblocks method
        if (EnableSpawn == true)
        {
            //Spawn on the spawn frequency
            if (spawnTimerRed >= spawnFreqRed)
            {
                SpawnBlockRed();
                spawnTimerRed = 0f - delayBlockRed;
            }
            if (spawnTimerBlue >= spawnFreqBlue)
            {
                SpawnBlockBlue();
                spawnTimerBlue = 0f;
            }
        }
        //StopSpawning Timers
        if (StopSpawn1 <= 0)
        {
            EnableSpawn = false;
            StopSpawn1 = 999f;
            BlockCollector.FindObjectOfType<BlockCollector>().DestroyAllBlocks();
        }
        if (StopSpawn2 <= 0)
        {
            EnableSpawn = false;
            StopSpawn2 = 999f;

            BlockCollector.FindObjectOfType<BlockCollector>().DestroyAllBlocks();

        }
        if (StopSpawn3 <= 0)
        {
            EnableSpawn = false;
            StopSpawn3 = 999f;
            BlockCollector.FindObjectOfType<BlockCollector>().DestroyAllBlocks();

        }
        if (StopSpawn4 <= 0)
        {
            EnableSpawn = false;
            StopSpawn4 = 999f;
            BlockCollector.FindObjectOfType<BlockCollector>().DestroyAllBlocks();

        }
        if (StopSpawn5 <= 0)
        {
            EnableSpawn = false;
            StopSpawn5 = 999f;
            BlockCollector.FindObjectOfType<BlockCollector>().DestroyAllBlocks();
            turnOnOffMisslies();

        }

        //Start Spawning Timers
        if (StartSpawn1 <= 0)
        {
            EnableSpawn = true;
            StartSpawn1 = 999f;

            SetDelayTimers();
           
        }
        if (StartSpawn2 <= 0)
        {
            EnableSpawn = true;
            StartSpawn2 = 999f;
            IncreaseLevel1();

            SetDelayTimers();
        
        }
        if (StartSpawn3 <= 0)
        {
            IncreaseLevel2();
            EnableSpawn = true;
            StartSpawn3 = 999f;

            SetDelayTimers();
        }
        if (StartSpawn4 <= 0)
        {
            IncreaseLevel3();
            EnableSpawn = true;
            StartSpawn4 = 999f;
            turnOnOffMisslies();
            SetDelayTimers();
        }
        if (StartSpawn5 <= 0)
        {
            IncreaseLevel4();
            EnableSpawn = true;
            StartSpawn5 = 999f;

            SetDelayTimers();
        }




    }
    void Timers()
    {
        //starts the timers
        spawnTimerRed += Time.deltaTime;
        spawnTimerBlue += Time.deltaTime;
        StopSpawn1 -= Time.deltaTime;
        StopSpawn2 -= Time.deltaTime;
        StopSpawn3 -= Time.deltaTime;
        StopSpawn4 -= Time.deltaTime;
        StopSpawn5 -= Time.deltaTime;
        StartSpawn1 -= Time.deltaTime;
        StartSpawn2 -= Time.deltaTime;
        StartSpawn3 -= Time.deltaTime;
        StartSpawn4 -= Time.deltaTime;
        StartSpawn5 -= Time.deltaTime;

    }

    private void SpawnBlockRed()
    {
        //Rotate the blocks so that they face the player
        Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-areaSpawnSize.x / 2f, areaSpawnSize.x / 2f), 0f, Random.Range(-areaSpawnSize.z / 2f, areaSpawnSize.z / 2f));
        //Spawn red  blocks at the location
        spawnedObject = Instantiate(redBlock, randomSpawnPoint, Quaternion.identity);
    }
    private void SpawnBlockBlue()
    {
        //Rotate the blocks so that they face the player
        Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-areaSpawnSize.x / 2f, areaSpawnSize.x / 2f), 0f, Random.Range(-areaSpawnSize.z / 2f, areaSpawnSize.z / 2f));
        //Spawn blue  blocks at the location
        spawnedObject = Instantiate(blueBlock, randomSpawnPoint, Quaternion.identity);
    }


    private void SetDelayTimers()
    {
        //set timers so that blocks down't spawn ontop of eachother
        spawnTimerRed = 0f;
        spawnTimerBlue = 1f;

    }
    //----------Increase the difficulty------------
    private void IncreaseLevel1()
    {
        spawnFreqRed = 3f;
        spawnFreqBlue = 3f;
    }

    private void IncreaseLevel2()
    {
        spawnFreqRed = 2f;
        spawnFreqBlue = 2f;
    }

    private void IncreaseLevel3()
    {
        spawnFreqRed = 1.5f;
        spawnFreqBlue = 1.5f;
    }
    private void IncreaseLevel4()
    {
        spawnFreqRed = 1f;
        spawnFreqBlue = 1f;
    }
    //----------Increase the difficulty------------

    //Turn of the missle spawning to save on computational power
    private void turnOnOffMisslies()
    {
        Silo.FindObjectOfType<Silo>().TurnOnMissleLaunch();
        Silo1.FindObjectOfType<Silo1>().TurnOnMissleLaunch1();
        Silo2.FindObjectOfType<Silo2>().TurnOnMissleLaunch2();
        Silo3.FindObjectOfType<Silo3>().TurnOnMissleLaunch3();
        Silo4.FindObjectOfType<Silo4>().TurnOnMissleLaunch4();
        Silo5.FindObjectOfType<Silo5>().TurnOnMissleLaunch5();
    }


}
