using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockFollowWayPoints : MonoBehaviour
{
    // used this as a tutorial -https://www.youtube.com/watch?v=aFxucZQ_5E4&list=PLPV2KyIb3jR4u5jX8za5iU1cqnQPmbzG0&index=2

    //Array for all the waypoints 
    public static Transform[] waypoints;

    private void Awake()
    {
        //get the transform data and push to array so it can be called 
        waypoints = new Transform[transform.childCount];

        for (int i = 0; i < waypoints.Length; i++)
        {
           waypoints[i] = transform.GetChild(i);
        }
    }

}
