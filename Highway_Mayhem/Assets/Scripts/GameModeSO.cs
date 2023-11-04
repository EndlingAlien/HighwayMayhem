using System;
using UnityEngine;

[CreateAssetMenuAttribute(menuName = "Create new GameMode", fileName = "GameMode Name")]
public class GameModeSO : ScriptableObject
{
  #region Variable Configuration

  [Header("Game Mode Configuration")]
  [SerializeField] string gamemodeName;
  [Space(10)]

  [Header("Environment Config")]
  [Tooltip("How fast should the highway move (same as Obstacle Speed)")]
  [SerializeField] float highwaySpeed;
  [Space(5)]
  [Tooltip("How fast should objects move on highway")]
  [SerializeField] float obstacleSpeed;
  [Tooltip("Time inbetween obstacle instatiation")]
  [SerializeField] float obstacleSpawnDelay;
  [Space(10)]

  [Header("Player Config")]
  [Tooltip("Player speed moving left to right")]
  [SerializeField] float playerSpeed;
  [Tooltip("Turret speed moving left to right")]
  [SerializeField] float turretSpeed;
  [Space(5)]
  
  [Tooltip("Does player have health?")]
  [SerializeField] bool playerHasHealth;
  [Tooltip("Will player be a different size?")]
  [SerializeField] bool playerHasNewScale;
  [Tooltip("Can the player shoot?")]
  [SerializeField] bool playerHasBullets;
  [Space(20)]

  [Header("*IF BOOLS ABOVE ARE FALSE, LEAVE RESPECTIVE VARIABLES AS DEFAULT*\n \nIf Player has health, configure Player Health\nIf Player will be a different scale, configure player scale\nIf Player can shoot, configure bullet variables")]
  [Space(10)]

  [Tooltip("Health amount")]
  [SerializeField] float playerHealth;
  [Tooltip("Scale of player, will be applied to x,y, and z axis")]
  [SerializeField] float playerScale;
  [Space(10)]

  [Header("Bullet Variables")]
  [Tooltip("Bullet emission rate")]
  [SerializeField] float bulletSpeed;
  [Tooltip("Bullet cooldown amount")]
  [SerializeField] float cooldownAmount;
  [Tooltip("How long player must wait after exhausting turret")]
  [SerializeField] float cooldownDelay;

  [Header("1 = Just Obstacles \n2 = Just Cars\n3 = Everything")]
  [Tooltip("What can player shoot")]
  [Range(1, 3)]
  [SerializeField] int playerCanShoot;

  #endregion

  public string GetName() { return gamemodeName; }

  public float GetHighwaySpeed() { return highwaySpeed; }
  public float GetObstacleSpeed() { return obstacleSpeed; }
  public float GetObstacleSpawnDelay() { return obstacleSpawnDelay; }

  public float GetPlayerSpeed() { return playerSpeed; }
  public float GetTurretSpeed() { return turretSpeed; }

  public bool GetPlayerHasHealth() { return playerHasHealth; }
  public bool GetPlayerHasNewScale() { return playerHasNewScale; }
  public bool GetPlayerHasBullets() { return playerHasBullets; }

  public float GetPlayerHealth() { return playerHealth; }
  public float GetPlayerScale() { return playerScale; }

  public float GetBulletSpeed() { return bulletSpeed; }
  public float GetCooldownAmount() { return cooldownAmount; }
  public float GetCooldownDelay() { return cooldownDelay; }
  public float GetPlayerCanShoot() { return playerCanShoot; }
}
