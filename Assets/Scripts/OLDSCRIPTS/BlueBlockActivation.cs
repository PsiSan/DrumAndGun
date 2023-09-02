using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlueBlockActivation : MonoBehaviour
{
    [SerializeField]
    private GameObject BlueZoneFar;
    [SerializeField]
    public Vector3 blockSmallSize = new Vector3(0.7f, 0.7f, 0.7f);
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
        if (other.gameObject.tag == "BlueZoneFar")
        {
            if (gameObject.layer == LayerMask.NameToLayer("BlueBlockLayerSmall"))
            {
                //Debug.Log("blue_block entered far blue");
                gameObject.layer = LayerMask.NameToLayer("BlueBlockLayerBig");
                gameObject.transform.localScale = blockLargeSize;

            }
        }
        if (other.gameObject.tag == "RedZoneFar")
        {
            if (gameObject.layer == LayerMask.NameToLayer("BlueBlockLayerBig"))
            {
                // Debug.Log("blue_block exited far blue");
                gameObject.layer = LayerMask.NameToLayer("BlueBlockLayerSmall");
                gameObject.transform.localScale = blockSmallSize;

            }

        }





        if (other.gameObject.tag == "BlueZoneClose")
        {
            if (gameObject.layer == LayerMask.NameToLayer("BlueBlockLayerSmall"))
            {
                //Debug.Log("blue_block entered far blue");
                gameObject.layer = LayerMask.NameToLayer("BlueBlockLayerBig");
                gameObject.transform.localScale = blockLargeSize;

            }
        }
        if (other.gameObject.tag == "RedZoneClose")
        {
            if (gameObject.layer == LayerMask.NameToLayer("BlueBlockLayerBig"))
            {
                //Debug.Log("blue_block exited far blue");
                gameObject.layer = LayerMask.NameToLayer("BlueBlockLayerSmall");
                gameObject.transform.localScale = blockSmallSize;

            }
        }



    }
    /*private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "BlueZoneFar")
        {
            if (gameObject.layer == LayerMask.NameToLayer("BlueBlockLayerActive"))
            {
                // Debug.Log("blue_block exited far blue");
                gameObject.layer = LayerMask.NameToLayer("BlueBlockLayerNonActive");
                gameObject.transform.localScale = blockSmallSize;

            }

        }

        if (other.gameObject.tag == "BlueZoneClose")
        {
            if (gameObject.layer == LayerMask.NameToLayer("BlueBlockLayerNonActive"))
            {
                //Debug.Log("blue_block exited far blue");
                gameObject.layer = LayerMask.NameToLayer("BlueBlockLayerNonActive");
                gameObject.transform.localScale = blockSmallSize;

            }
        }
    }*/
}
