using UnityEngine;

public class DeathHandler : MonoBehaviour
{
   #region Variables

AudioSource playerExplodeAudio;

   bool isPlayerAlive = true;
   public bool IsPlayerAlive { get { return isPlayerAlive; } }

   //Obstacle scripts
   RepeatHighway[] repeatHighway;
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

   private void Start() {
      playerExplodeAudio = GetComponent<AudioSource>();
   }

   public void ActivateGameOver()
   {
      StopObstacles();
      PlayerWheels(false);
      PlayerBulletsAndAudio();

      UIscript = FindObjectOfType<UIController>();
      UIscript.EnableGameOverCanvas();
      playerExplodeAudio.Play();
   }

   #region Obstacle Method

   void StopObstacles()
   {
      repeatHighway = FindObjectsOfType<RepeatHighway>();
      despawnObject = FindObjectOfType<DespawnObject>();

      isPlayerAlive = false;

      foreach (RepeatHighway script in repeatHighway)
      {
         script.enabled = false;
      }

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

   void PlayerBulletsAndAudio()
   {
      playerController = FindObjectOfType<PlayerController>();
      playerController.StopAllBullets();
      playerController.StopAudio();
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