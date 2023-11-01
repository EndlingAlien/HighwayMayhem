using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeathHandler : MonoBehaviour
{
   RepeatHighway repeatHighway;
   DespawnObject despawnObject;

   RotateWheels[] rotateWheels;
   MoveOnHighway moveOnHighway;

   SceneLoader sceneManager;

   bool isPlayerAlive = true;
   public bool IsPlayerAlive { get { return isPlayerAlive; } }

   public void ActivateGameOver()
   {
      StopObstacles();
      DisablePlayerWheels();
      
      sceneManager = FindObjectOfType<SceneLoader>();
      sceneManager.EnableGameOverCanvas();
   }

   void StopObstacles()
   {
      repeatHighway = FindObjectOfType<RepeatHighway>();
      despawnObject = FindObjectOfType<DespawnObject>();

      repeatHighway.enabled = false;
      isPlayerAlive = false;

      AccessDespawnChildScript();
   }

   void AccessDespawnChildScript()
   {
      for (int i = despawnObject.transform.childCount - 1; i >= 0; i--)
      {
         Transform despawnChild = despawnObject.transform.GetChild(i);

         foreach (Transform child in despawnChild)
         {
            moveOnHighway = despawnChild.GetComponent<MoveOnHighway>();
            if (moveOnHighway == null) { return; }
            moveOnHighway.enabled = false;
         }
      }
   }

   void DisablePlayerWheels()
   {
      rotateWheels = FindObjectsOfType<RotateWheels>();

      foreach (RotateWheels wheel in rotateWheels)
      {
         wheel.enabled = false;
      }
   }

}
