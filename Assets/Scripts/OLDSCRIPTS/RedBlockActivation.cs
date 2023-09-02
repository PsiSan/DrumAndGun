using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RedBlockActivation : MonoBehaviour
{
    [SerializeField]
    private GameObject redZoneFar;
    [SerializeField]
    public Vector3 blockSmallSize= new Vector3(0.7f, 0.7f, 0.7f);
    public Vector3 blockLargeSize = new Vector3(1.4f, 1.4f, 1.4f);


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
        if (other.gameObject.tag == "RedZoneFar")
        {
            if (gameObject.layer == LayerMask.NameToLayer("RedBlockLayerSmall"))
            {
                //Debug.Log("red_block entered far red");
                gameObject.layer = LayerMask.NameToLayer("RedBlockLayerBig");
                gameObject.transform.localScale = blockLargeSize;

            }
        }

        if (other.gameObject.tag == "RedZoneClose")
        {
            if (gameObject.layer == LayerMask.NameToLayer("RedBlockLayerSmall"))
            {
                //Debug.Log("red_block entered far red");
                gameObject.layer = LayerMask.NameToLayer("RedBlockLayerBig");
                gameObject.transform.localScale = blockLargeSize;

            }
        }

    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "RedZoneFar")
        {
            if (gameObject.layer == LayerMask.NameToLayer("RedBlockLayerBig"))
            {
               // Debug.Log("red_block entered far red");
                gameObject.layer = LayerMask.NameToLayer("RedBlockLayerSmall");
                gameObject.transform.localScale = blockSmallSize;

            }

        }
        if (other.gameObject.tag == "RedZoneClose")
        {
            if (gameObject.layer == LayerMask.NameToLayer("RedBlockLayerBig"))
            {
                //Debug.Log("red_block entered far red");
                gameObject.layer = LayerMask.NameToLayer("RedBlockLayerSmall");
                gameObject.transform.localScale = blockSmallSize;

            }
        }
    }
}
