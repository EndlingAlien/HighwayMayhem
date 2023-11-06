using UnityEngine;

public class RepeatHighway : MonoBehaviour
{
    float repeatWidth;
    Vector3 startPos;

    //GameMode
    GameModeController gameMode;
    float speed;

    void Start()
    {
        gameMode = FindObjectOfType<GameModeController>();
        speed = gameMode.CurrentGameMode.GetHighwaySpeed();

        startPos = transform.position;
        repeatWidth = GetComponent<BoxCollider>().size.z / 2;
    }

    void Update()
    {
        transform.Translate(Vector3.back * Time.deltaTime * speed);

        if (transform.position.z < startPos.z - repeatWidth)
        {
            transform.position = startPos;
        }
    }
}