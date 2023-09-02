using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WayPointMovement : MonoBehaviour
{

    //tutorial followed https://www.youtube.com/watch?v=aFxucZQ_5E4&list=PLPV2KyIb3jR4u5jX8za5iU1cqnQPmbzG0&index=2
    public float speed = 10f;

    private Transform target;
    private int wavepointIndex = 0;

    public float waypointEntryEstimater = 0.2f;

    // Start is called before the first frame update
    void Start()
    {
        target = BlockFollowWayPoints.waypoints[0];
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 dir= target.position - transform.position;
        transform.Translate(dir.normalized * speed * Time.deltaTime, Space.World);

        if(Vector3.Distance(transform.position, target.position) <= waypointEntryEstimater)
        {
            GetNextWayPoint();
        }

    }

    void GetNextWayPoint()
    {
        if(wavepointIndex >= BlockFollowWayPoints.waypoints.Length -1)
        {
            Destroy(gameObject);
            return;
        }

        wavepointIndex++;
        target = BlockFollowWayPoints.waypoints[wavepointIndex];


    }
}
