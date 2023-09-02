using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlueCubesBPM : MonoBehaviour
{
    // Define the BPM rate (beats per minute)
    public float bpm = 100f;

    // Reference to the ObjectCollector script attached to another GameObject
    public BlockCollector objectCollector;

    // Layers
    public LayerMask normalLayer;
    public LayerMask activeLayer;

    // Timers to handle the layer change
    private float timer;
    private float timeBetweenHalfBeats;
    private bool isActiveLayer;

    // List to store objects with the specified tag
    private List<GameObject> collectedObjects;

    // Scale factors for normal and active layers
    public Vector3 normalScale = Vector3.one;
    public Vector3 activeScale = new Vector3(2f, 2f, 2f);

    void Start()
    {
        // Get the list of collected objects from the BlocksCollector script
        collectedObjects = objectCollector.blueBlocksList;

        // Converts BPM to Uunity time scale
        timeBetweenHalfBeats = 60f / bpm;



        // Subscribe to the beat event from the ObjectCollector script
      //  objectCollector.OnBeat += OnBeatEventHandler;
    }

    void Update()
    {
        // Start the timer
        timer += Time.deltaTime;

        // If the timer exceeds the time between beats, toggle the layer of objects in the list
        if (timer >= timeBetweenHalfBeats)
        {
            ToggleLayer();
            timer = 0f;
        }
    }

    void ToggleLayer()
    {
        // Toggle the layer and scale for each object in the list
        foreach (GameObject obj in collectedObjects)
        {
            if (isActiveLayer)
            {
                // Change to the normal layer and scale back to normal size
                obj.layer = (int)Mathf.Log(normalLayer.value, 2);
                obj.transform.localScale = normalScale;
            }
            else
            {
                // Change to the active layer and scale to active size
                obj.layer = (int)Mathf.Log(activeLayer.value, 2);
                obj.transform.localScale = activeScale;
            }
        }

        // Toggle the isActiveLayer variable
        isActiveLayer = !isActiveLayer;

        // Invoke the RevertToNormalLayer method after 1 second if we switched to the active layer
        if (isActiveLayer)
        {
            Invoke("RevertToNormalLayer", 1f);
        }
    }

    // Method to revert the objects back to the normal layer and size
    void RevertToNormalLayer()
    {
        foreach (GameObject obj in collectedObjects)
        {
            obj.layer = (int)Mathf.Log(normalLayer.value, 2);
            obj.transform.localScale = normalScale;
        }
    }
}
