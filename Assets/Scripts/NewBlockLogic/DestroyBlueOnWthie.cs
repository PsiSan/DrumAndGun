using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyBlueOnWthie : MonoBehaviour
{
    //Add the zone
    [SerializeField]
    private GameObject whiteZoneLeft;


    private void OnTriggerEnter(Collider other)
    {
        //Debug.Log(other.gameObject.name);
        //Destroy block on entering the zone
        if (other.gameObject.tag == "WhiteZone")
        {
            Destroy(gameObject);
            ScoreManager.instance.MinusScoreOnWhite();
        }
   

    }
}
