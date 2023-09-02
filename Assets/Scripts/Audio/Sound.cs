using UnityEngine.Audio;
using UnityEngine;

[System.Serializable]
public class Sound
{

    //followed TUTORIAL : https://www.youtube.com/watch?v=6OT43pvUyfY&t=613s&ab_channel=Brackeys

    public string name;
    public AudioClip clip;

    [Range(0f,1f)]
    public float volume;
    [Range(0.1f, 2f)]
    public float pitch;
    
    public bool loop;

    [HideInInspector]
    public AudioSource source;



}
