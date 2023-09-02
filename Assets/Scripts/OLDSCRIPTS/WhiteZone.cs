using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WhiteZone : MonoBehaviour
{

    [SerializeField]
    private GameObject redCube;
    [SerializeField]
    private GameObject blueCube;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        

    }

    private void OnTriggerEnter(Collider other)
    {
       // Debug.Log(other.gameObject.name);
        if (other.gameObject.tag == "WhiteZone")
        {
            Destroy(gameObject);
        }

    }
   
    
}
