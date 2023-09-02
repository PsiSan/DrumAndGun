using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyFollowWaypoints : MonoBehaviour
{
    // used this as a tutorial -https://www.youtube.com/watch?v=aFxucZQ_5E4&list=PLPV2KyIb3jR4u5jX8za5iU1cqnQPmbzG0&index=2
    public static Transform[] enemyWaypoints;

    private void Awake()
    {
        enemyWaypoints = new Transform[transform.childCount];

        for (int i = 0; i < enemyWaypoints.Length; i++)
        {
            enemyWaypoints[i] = transform.GetChild(i);
        }
    }
}
