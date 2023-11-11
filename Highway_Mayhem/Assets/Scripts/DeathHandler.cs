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
   PlayerController playerController;

   //Scripts
   RotateWheels[] rotateWheels;
   UIController UIscript;
   SavedData savedData;
   GameModeController gameMode;
   ScoreKeeper scoreKeeper;

   #endregion

   public void ActivateGameOver()
   {
      StopObstacles();
      PlayerWheels(false);
      PlayerBullets();

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

   void PlayerBullets()
   {
      playerController = FindObjectOfType<PlayerController>();
      playerController.StopAllBullets();
   }

   public void ProcessPlayerScore()
   {
      scoreKeeper = FindObjectOfType<ScoreKeeper>();
      gameMode = FindObjectOfType<GameModeController>();
      savedData = FindObjectOfType<SavedData>();

      Debug.Log("Checking score for, GameMode: " + gameMode.CurrentGameMode.GetName() + " with a score of: " + scoreKeeper.Points());
      savedData.CheckAndSetHighscore(gameMode.CurrentGameMode.GetName(), scoreKeeper.Points());
   }
}