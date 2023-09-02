using UnityEngine.Audio;
using UnityEngine;
using System;


public class AudioManager : MonoBehaviour
{
    //followed TUTORIAL : https://www.youtube.com/watch?v=6OT43pvUyfY&t=613s&ab_channel=Brackeys

    public Sound[] sounds;

    public bool StartPlaying = true;





    // Start is called before the first frame update
    void Awake()
    {
        foreach (Sound s in sounds)
        {
            s.source = gameObject.AddComponent<AudioSource>();
            s.source.clip = s.clip;
            s.source.volume = s.volume;
            s.source.pitch = s.pitch;
            s.source.loop = s.loop;

        }
    }
    private void Start()
    {
        // FindObjectOfType<AudioManager>().PlayMyAudio("phonk_song");
        // FindObjectOfType<AudioManager>().PlayMyAudio("easy_song");
    }

    public void PlayMyAudio(string name)
    {
       Sound s = Array.Find(sounds, sound => sound.name == name);
        if ( s== null)
        {
            Debug.LogWarning("Sound" + name + "not found");
            return;
        }
        s.source.Play();
    }

    public void PlayLetsGO()
    {
        if (StartPlaying == true)
        {
            FindObjectOfType<AudioManager>().PlayMyAudio("LetsGo");
        }
    }
    public void StartAmbience()
    {
        if (StartPlaying == true)
        {
            FindObjectOfType<AudioManager>().PlayMyAudio("Ambience");
        }
    }
}
