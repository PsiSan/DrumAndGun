using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveOrbs : MonoBehaviour
{
    //Set Movement speed of orbs
    [SerializeField]
    private float orbMovementSpeed;
  
    // Update is called once per frame
    void Update()
    {
        transform.position = transform.position - new Vector3(orbMovementSpeed * Time.deltaTime, 0, 0);
    }
}
