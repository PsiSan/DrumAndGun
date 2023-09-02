using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockCollector : MonoBehaviour
{
    //Setup Tags
    public string redBlocks = "Red_block";
    public string blueBlocks = "Blue_block";

    //Setup Lists to store objects
    public List<GameObject> redBlocksList = new List<GameObject>();
    public List<GameObject> blueBlocksList = new List<GameObject>();
    // Interval to check if blocks are still in the scene
    public float checkInterval = 5f;
    // The area to check
    public Vector3 areaCenter;
    // Radius of the area to check
    public float areaRadius; 
  
    private void Update()
    {
        StartCoroutine(CheckObjectsInArea());
    }


    // Function to add an object to the list when it enters the trigger area
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(redBlocks))
        {
            // Add the red blocks to the list
            redBlocksList.Add(other.gameObject);
        }

        if (other.CompareTag(blueBlocks))
        {
            // Add the blue blocks to the list
            blueBlocksList.Add(other.gameObject);
        }
    }

    private IEnumerator CheckObjectsInArea()
    {
        while (true)
        {
            yield return new WaitForSeconds(checkInterval);

            // Remove objects that are no longer in the area
            for (int i = redBlocksList.Count - 1; i >= 0; i--)
            {
                GameObject obj = redBlocksList[i];
                if (obj == null || Vector3.Distance(obj.transform.position, areaCenter) > areaRadius)
                {
                    redBlocksList.RemoveAt(i);
                }
            }
            for (int i = blueBlocksList.Count - 1; i >= 0; i--)
            {
                GameObject obj = blueBlocksList[i];
                if (obj == null || Vector3.Distance(obj.transform.position, areaCenter) > areaRadius)
                {
                    blueBlocksList.RemoveAt(i);
                }
            }
        }
    }

    //To delete all the blocks at the end of each section of the song
    public void DestroyAllBlocks()
    {
       
        for (int i = redBlocksList.Count - 1; i >= 0; i--)
        {
            GameObject obj = redBlocksList[i];
            Destroy(obj);
        }
        for (int i = blueBlocksList.Count - 1; i >= 0; i--)
        {
            GameObject obj = blueBlocksList[i];
            Destroy(obj);
        }

    }

}
