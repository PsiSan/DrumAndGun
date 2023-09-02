using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveBlocks : MonoBehaviour
{
    //Setup Spawn location and Target location for movement 
    public Transform targetLocation;
    
    //Set the speed at which the object moves towards the target location
    public float movementSpeedBlocks;
    //Speed at which the object rotates towards the target location
    public float rotationSpeed;

    private void Start()
    {
        targetLocation = targetLocation.transform;
    }
    private void Update()
    {
        MoveAndRotateObject();
    }


    private void MoveAndRotateObject()
    {
        //Calculates the direction and rotation towards the target location
        Vector3 targetDirection = targetLocation.position - transform.position;
        Quaternion targetRotation = Quaternion.LookRotation(targetDirection);
     
        //Moves the object towards the target location
        transform.position += targetDirection.normalized * movementSpeedBlocks * Time.deltaTime;

        //Rotates the object towards the target location
        transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, rotationSpeed * Time.deltaTime);
    }
}
