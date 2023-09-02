using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMove : MonoBehaviour
{

    // used this as a tutorial -https://www.youtube.com/watch?v=aFxucZQ_5E4&list=PLPV2KyIb3jR4u5jX8za5iU1cqnQPmbzG0&index=2
    [SerializeField]
    private float enemyMoveSpeed = 5f;

    private Transform enemyTarget;

    private int enemyWPIndex = 0;

    private void Start()
    {
        enemyTarget = EnemyFollowWaypoints.enemyWaypoints[0];
    }
    private void Update()
    {
        Vector3 moveDir = enemyTarget.position - transform.position;

        transform.Translate(moveDir.normalized * enemyMoveSpeed * Time.deltaTime, Space.World);

        if (Vector3.Distance(transform.position, enemyTarget.position) <= 0.2)
        {
            GetNextEnemyWaypoint();
        }
    }

    void GetNextEnemyWaypoint()
    {

        enemyWPIndex++;
        enemyTarget = EnemyFollowWaypoints.enemyWaypoints[enemyWPIndex];
    }

}