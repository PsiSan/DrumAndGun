using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightsOnAndOff : MonoBehaviour
{
    // An array of the materials
    public Material[] newMaterials;
    // An array of the game objects to mod
    public GameObject[] objectsToChange;
    // The number of BPM
    public float beatsPerMinute = 55; 
    private float timeBetweenBeats;
    //Set the current Material index
    private int currentMaterialIndex = 0;
    // 1 for forward, -1 for backward
    private int changeDirection = 1;
 

    private void Start()
    {

        //Setup BPM of song to unity timescale
        timeBetweenBeats = 60f / beatsPerMinute;

           //Repeat this function
            InvokeRepeating("ChangeMaterials", 0f, timeBetweenBeats);
 
    }

    private void ChangeMaterials()
    {
            //Change the matterial of the lights so it looks like its tunrning on and off
            if (objectsToChange.Length == 0 || newMaterials.Length == 0)
            {
                Debug.LogError("Objects or materials arrays are empty!");
                return;
            }
            //Setup the materials to cycle through
            foreach (GameObject obj in objectsToChange)
            {
                Renderer renderer = obj.GetComponent<Renderer>();
                if (renderer != null)
                {
                    renderer.material = newMaterials[currentMaterialIndex];
                }
            }

            currentMaterialIndex += changeDirection;
            //Cycles through all the materials
            if (currentMaterialIndex >= newMaterials.Length)
            {
                currentMaterialIndex = newMaterials.Length - 2;
                changeDirection = -1;
            }
            else if (currentMaterialIndex < 0)
            {
                currentMaterialIndex = 1;
                changeDirection = 1;
            }
        

    }

}
