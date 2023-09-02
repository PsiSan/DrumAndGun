using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyOrbs : MonoBehaviour
{

    [SerializeField]
    private GameObject OrbDeleter;

    private void OnTriggerEnter(Collider other)
    {
       
        if (other.gameObject.tag == "OrbDeleter")
        {
            Destroy(gameObject);
        }

    }
}
