using System.Collections;
using UnityEngine;

public class DetectBullets : MonoBehaviour
{
    #region Variables

    [Tooltip("Particle system for obstacle explosion")]
    [SerializeField] ParticleSystem explosion;
    [SerializeField] UnityEngine.UI.Image pointImage;
    [SerializeField] Sprite[] pointSprites;
    Animator pointImageAnimator;

    //GameMode
    GameModeController gameMode;
    string canShoot;
    bool hasBullets;

    //ScoreKeeper
    ScoreKeeper scorekeeper;
    int pointvalue;

    #endregion

    void Start()
    {
        gameMode = FindObjectOfType<GameModeController>();
        scorekeeper = FindObjectOfType<ScoreKeeper>();
        pointImageAnimator = pointImage.GetComponent<Animator>();
        hasBullets = gameMode.CurrentGameMode.GetPlayerHasBullets();
        pointvalue = 0;

        if (hasBullets)
        {
            WhatCanPlayerShoot();
        }
    }

    void WhatCanPlayerShoot()
    {
        switch (gameMode.CurrentGameMode.GetPlayerCanShoot())
        {
            case 1:
                canShoot = "Obstacle";
                pointvalue = 200;
                pointImage.sprite = pointSprites[0]; 
                break;

            case 2:
                canShoot = "Car";
                pointvalue = 400;
                pointImage.sprite = pointSprites[2]; 
                break;

            case 3:
                canShoot = "All";
                pointvalue = 300;
                pointImage.sprite = pointSprites[1]; 
                break;

            default:
                canShoot = null;
                Debug.Log("Player cannot shoot anything");
                break;
        }
    }

    void OnParticleCollision(GameObject other)
    {
        if (hasBullets)
        {
            if (canShoot == "All")
            {
                if (other.CompareTag("Obstacle") || other.CompareTag("Car"))
                {
                    Instantiate(explosion, other.transform.position, Quaternion.identity);
                    Destroy(other);
                    pointImageAnimator.SetTrigger("AddPointValue");
                    scorekeeper.UpdateScore(pointvalue);
                }
            }
            else if (other.CompareTag(canShoot))
            {
                Instantiate(explosion, other.transform.position, Quaternion.identity);
                Destroy(other.gameObject);
               pointImageAnimator.SetTrigger("AddPointValue");
                scorekeeper.UpdateScore(pointvalue);
            }
        }
    }
    //for anim event trigger
     void ResetPointTrigger()
{
    pointImageAnimator.ResetTrigger("AddPointValue");
}
}