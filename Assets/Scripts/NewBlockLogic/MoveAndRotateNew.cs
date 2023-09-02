using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveAndRotateNew : MonoBehaviour
{
    //Setup speed
    [SerializeField]
    private float movementSpeed = 3f;


    //Create Static instance
    public static MoveAndRotateNew instance;


    //Setup Direction
    [SerializeField]
    private Vector3 direction = Vector3.forward;

    [SerializeField]
    private Vector3 turn1 = Vector3.left;

    // Update is called once per frame
    void Update()
    {
        MoveAndRotateBlock();
    }

    void MoveAndRotateBlock()
    {
        //Moves the object towards the target location
        transform.Translate(direction.normalized * movementSpeed * Time.deltaTime);


    }
}
