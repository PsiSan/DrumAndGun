using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyOnWhiteEnemy : MonoBehaviour
{
    [SerializeField]
    private GameObject whiteZoneLeft;

    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnTriggerEnter(Collider other)
    {
        //Debug.Log(other.gameObject.name);
        if (other.gameObject.tag == "WhiteZone")
        {
            Destroy(gameObject);
            ScoreManager.instance.MinusScoreOnEnemy();
        }


    }
}
