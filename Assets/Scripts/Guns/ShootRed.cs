using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class ShootRed : MonoBehaviour
{
    //Tutorial Followed = https://www.youtube.com/watch?v=VdT0zMcggTQ&ab_channel=Valem

    private InputDevice targetDevice;

    //Refrences
    public Transform shootFrom;
    public float shotPower;
    public float rangeRed;
    public float fireRate;
    public float canFireTimer;
    public RaycastHit rayCastHitRed;
    public LayerMask targetRedBlockSmall;
    public LayerMask targetRedBlockBig;
    public LayerMask TargetEnemy;
    public GameObject particleImpact;

    // Update is called once per frame
    void Update()
    {
        GetTheControllersRight();
        CheckControllerInput();
        //Check that palyer can fire
        canFireTimer -= Time.deltaTime;
    }

    void GetTheControllersRight()
    {

        List<InputDevice> devices = new List<InputDevice>();
        InputDevices.GetDevices(devices);

        InputDeviceCharacteristics rightControllerCharacteristics = InputDeviceCharacteristics.Right | InputDeviceCharacteristics.Controller;
        InputDevices.GetDevicesWithCharacteristics(rightControllerCharacteristics, devices);

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
            if(canFireTimer <= fireRate)
            {
                FindObjectOfType<AudioManager>().PlayMyAudio("GunShot");
                shootGun();
            }
           
            // Debug.Log("pressing trigger");
           // shootGun();

        }


        targetDevice.TryGetFeatureValue(CommonUsages.primaryButton, out bool primaryButtonValue);
        if (primaryButtonValue)
        {
            //Debug.Log("pressing primary button");
            //shootGun();
        }


    }
    
    void shootGun()
    {

        //Check and Destroy if block is large
        if (Physics.Raycast(shootFrom.position, shootFrom.forward, out rayCastHitRed, rangeRed, targetRedBlockBig))
        {
            Debug.Log(rayCastHitRed.collider.name);
            //Play Audio
             FindObjectOfType<AudioManager>().PlayMyAudio("GunImpactGood");
            //Play the impact particles
            PlayImpactEffect(rayCastHitRed.point, rayCastHitRed.normal);
            //Destroy The Object hitting
            Destroy(rayCastHitRed.collider.gameObject);
            //Add Score sytem Call here
            ScoreManager.instance.AddPointsBigBlock();
            //Reset Shot
            canFireTimer = 0.8f;
        }

        //Check and Destroy if block is small
        if (Physics.Raycast(shootFrom.position, shootFrom.forward, out rayCastHitRed, rangeRed, targetRedBlockSmall))
        {
            Debug.Log(rayCastHitRed.collider.name);
            //Play Audio
            FindObjectOfType<AudioManager>().PlayMyAudio("GunImpactBad");
            //Play the impact particles
            PlayImpactEffect(rayCastHitRed.point, rayCastHitRed.normal);
            Destroy(rayCastHitRed.collider.gameObject);
            //Add Score sytem Call here
            ScoreManager.instance.AddPointsSmallBlock();
            //Reset Shot
            canFireTimer = 0.8f;
        }

        //Check and Destroy if block is enemy
        if (Physics.Raycast(shootFrom.position, shootFrom.forward, out rayCastHitRed, rangeRed, TargetEnemy))
        {
            Debug.Log(rayCastHitRed.collider.name);
            //Play Audio
            FindObjectOfType<AudioManager>().PlayMyAudio("GunImpactBad");
            //Play the impact particles
            PlayImpactEffect(rayCastHitRed.point, rayCastHitRed.normal);
            Destroy(rayCastHitRed.collider.gameObject);
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
