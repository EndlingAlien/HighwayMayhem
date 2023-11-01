using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class SceneLoader : MonoBehaviour
{
    [SerializeField] GameObject[] canvases;
    GameObject desiredCanvas;



    public void EnableGameOverCanvas()
    {
        FindAndEnableCorrectCanvas("GameOverCanvas");
    }

    void EnableMenuCanvas()
    {
        
    }

    void FindAndEnableCorrectCanvas(string desiredTag)
    {
        foreach (GameObject canvas in canvases)
        {
            if (canvas.CompareTag(desiredTag))
            {
                desiredCanvas = canvas;
                desiredCanvas.SetActive(true);
            }
        }
    }

    public void Reload()
    {
        int currentScene = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(currentScene);
    }

    public void Exit()
    {
        //open menu scene
        Debug.Log("Returning to Menu");
    }
}
