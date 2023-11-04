using UnityEngine;

public class DeathHandler : MonoBehaviour
{
   #region Variables

   bool isPlayerAlive = true;
   public bool IsPlayerAlive { get { return isPlayerAlive; } }

   //Obstacle scripts
   RepeatHighway repeatHighway;
   DespawnObject despawnObject;
   MoveOnHighway moveOnHighway;

   //Player scripts
   RotateWheels[] rotateWheels;

   //UI scripts
   UIController UIscript;

   #endregion

   public void ActivateGameOver()
   {
      StopObstacles();
      PlayerWheels(false);

      UIscript = FindObjectOfType<UIController>();
      UIscript.EnableGameOverCanvas();
   }

   #region Obstacle Method

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

   #endregion

   public void PlayerWheels(bool value)
   {
      rotateWheels = FindObjectsOfType<RotateWheels>();

      foreach (RotateWheels wheel in rotateWheels)
      {
         wheel.enabled = value;
      }
   }
}
