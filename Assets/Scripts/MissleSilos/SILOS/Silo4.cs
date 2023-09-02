using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Silo4 : MonoBehaviour
{

    //SetCanLaunch
    [SerializeField]
    private bool canLaunch4 = false;

    //Where missle can launch from set to under the level
    [SerializeField]
    private Vector3 launchArea;

    //Launch Freq
    [SerializeField]
    private float launchFreq;

    //Launch Timers
    private float launchTimer;

    //Setup Missles
    [SerializeField]
    private GameObject missle;

    // Reference to the spawned object
    private GameObject spawnedObject;


    private void Update()
    {
        launchTimer += Time.deltaTime;

        if (canLaunch4 == true)
        {
            if(launchTimer >= launchFreq)
            {
                LaunchMissle();
                launchTimer = 0f;

            }
        }

    }

    private void LaunchMissle()
    {
        Vector3 randomSpawnPoint = transform.position + new Vector3(Random.Range(-launchArea.x / 2f, launchArea.x / 2f), 0f, Random.Range(-launchArea.z / 2f, launchArea.z / 2f));

        spawnedObject = Instantiate(missle, randomSpawnPoint, Quaternion.identity);
    }

    public void TurnOnMissleLaunch4()
    {

        if (canLaunch4 == false)
        {
            canLaunch4 = true;
        }
        else
        {
            canLaunch4 = false;
        }


    }


}
