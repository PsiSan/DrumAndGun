using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PIllars : MonoBehaviour
{

    //The speed at which it moves
    [SerializeField]
    private float moveSpeed;
    //If it can move 
    private bool canMove = true;
    //Turn off so cant go heigher
    [SerializeField]
    //MoveDirection
    private Vector3 moveDirection;
    //DestroyMisslesRoof
    [SerializeField]
    private GameObject roof;


    // Update is called once per frame
    void Update()
    {
        //Check that missles can spawn
        if (canMove == true)
        {    
                //move the missles
                transform.position += moveDirection.normalized * moveSpeed * Time.deltaTime;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        //Destroy the missles
        if (other.gameObject.tag == "HitRoof")
        {
            Destroy(gameObject);
        }

    }
}
