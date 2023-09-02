using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class ShootBlue : MonoBehaviour
{
    //Tutorial Followed = https://www.youtube.com/watch?v=VdT0zMcggTQ&ab_channel=Valem

    private InputDevice targetDevice;

    //Refrences
    //Setup the gun-----
    public Transform shootFrom;
    public float shotPower;
    public float rangeBlue;
    public float fireRate;
    public float canFireTimer;
    public RaycastHit rayCastHitBlue;
    public LayerMask targetBlueBlockSmall;
    public LayerMask targetBlueBlockBig;
    public LayerMask targetEnemy;
    public GameObject particleImpact;

    // Update is called once per frame
    void Update()
    {
        GetTheControllersLeft();
        CheckControllerInput();
        //Check that palyer can fire
        canFireTimer -= Time.deltaTime;
    }

    void GetTheControllersLeft()
    {

        List<InputDevice> devices = new List<InputDevice>();
        InputDevices.GetDevices(devices);

        InputDeviceCharacteristics leftControllerCharacteristics = InputDeviceCharacteristics.Left | InputDeviceCharacteristics.Controller;
        InputDevices.GetDevicesWithCharacteristics(leftControllerCharacteristics, devices);

        foreach (var item in devices)
        {
            // Debug.Log(item.name + item.characteristics);
        }

        if (devices.Count > 0)
        {
            targetDevice = devices[0];
        }
    }

    void CheckControllerInput()
    {

        targetDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool triggerButtonValue);
        if (triggerButtonValue)
        {
            // Debug.Log("pressing trigger");
            if (canFireTimer <= fireRate)
            {
                FindObjectOfType<AudioManager>().PlayMyAudio("GunShot");
                shootGun();
               
            }
        }


        targetDevice.TryGetFeatureValue(CommonUsages.primaryButton, out bool primaryButtonValue);
        if (primaryButtonValue)
        {
            //Debug.Log("pressing primary button");
            //3shootGun();
        }


    }

    void shootGun()
    {
        //Check and Destroy if block is large
        if (Physics.Raycast(shootFrom.position, shootFrom.forward, out rayCastHitBlue, rangeBlue, targetBlueBlockBig))
        {
            Debug.Log(rayCastHitBlue.collider.name);
            FindObjectOfType<AudioManager>().PlayMyAudio("GunImpactGood");
            //Play the impact particles
            PlayImpactEffect(rayCastHitBlue.point, rayCastHitBlue.normal);
            Destroy(rayCastHitBlue.collider.gameObject);
            //Add Score sytem Call here
            ScoreManager.instance.AddPointsBigBlock();
            //Reset Shot
            canFireTimer = 0.8f;
        }
        //Check and Destroy if block is small
        if (Physics.Raycast(shootFrom.position, shootFrom.forward, out rayCastHitBlue, rangeBlue, targetBlueBlockSmall))
        {
            Debug.Log(rayCastHitBlue.collider.name);
            FindObjectOfType<AudioManager>().PlayMyAudio("GunImpactBad");
            //Play the impact particles
            PlayImpactEffect(rayCastHitBlue.point, rayCastHitBlue.normal);
            Destroy(rayCastHitBlue.collider.gameObject);
            //Add Score sytem Call here
            ScoreManager.instance.AddPointsSmallBlock();
            //Reset Shot
            canFireTimer = 0.8f;   
        }
        //Check and Destroy if block is small
        if (Physics.Raycast(shootFrom.position, shootFrom.forward, out rayCastHitBlue, rangeBlue, targetEnemy))
        {
            Debug.Log(rayCastHitBlue.collider.name);
            FindObjectOfType<AudioManager>().PlayMyAudio("GunImpactBad");
            //Play the impact particles
            PlayImpactEffect(rayCastHitBlue.point, rayCastHitBlue.normal);
            Destroy(rayCastHitBlue.collider.gameObject);
            //Reset Shot
            canFireTimer = 0.8f;
        }



    }
    private void PlayImpactEffect(Vector3 position, Vector3 normal)
    {
        if (particleImpact != null)
        {
            // Instantiate the particles
            GameObject impactEffect = Instantiate(particleImpact, position, Quaternion.LookRotation(normal));
            // This is creates so that the particles gets destroyed 
            ParticleSystem particleSystem = impactEffect.GetComponent<ParticleSystem>();
            if (particleSystem != null)
            {
                Destroy(impactEffect, particleSystem.main.duration);
            }
        }
    }

}
