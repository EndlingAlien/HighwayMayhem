using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenuAttribute(menuName = "GameSession", fileName = "New GameMode")]
public class GameSession : ScriptableObject
{
    [SerializeField] string gamemodeName;
    [SerializeField] int speed;
  //This script will configure the correct variables for the gamemodes specified
  //Ex: GameMode name, object sapwn Delay, repeatHighway speed
  //also in charge of Audio, Settings config
}
