using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.UIElements;
using Microsoft.Unity.VisualStudio.Editor;

public class MenuUIController : MonoBehaviour
{

    [Header("Canvases")]
    [Tooltip("List of Canvases in Hierarchy")]
    [SerializeField] GameObject[] canvases;
    [Space(10)]

    [Header("Text Fields")]
    [SerializeField] TextMeshProUGUI bulletBoolText;
    [SerializeField] TextMeshProUGUI healthBoolText;
    [SerializeField] TextMeshProUGUI highscoreText;
    [Space(10)]

    [Header("Dropdowns")]
    [SerializeField] TMP_Dropdown gamemodeDropdown;
    [SerializeField] TMP_Dropdown levelDropdown;
    [Space(10)]

    [Header("Images")]
    [SerializeField] UnityEngine.UI.Image gameModeImage;
    [SerializeField] UnityEngine.UI.Image levelImage;

    ModePersist modePersist;
    SavedData savedData;

    void Start()
    {
        modePersist = FindObjectOfType<ModePersist>();
        savedData = FindObjectOfType<SavedData>();

        gamemodeDropdown.onValueChanged.AddListener(delegate { GameModeValueChanged(gamemodeDropdown); });
        levelDropdown.onValueChanged.AddListener(delegate { LevelValueChanged(levelDropdown); });
    }

    void GameModeValueChanged(TMP_Dropdown change)
    {
        //when value changes change the image
    }
    void LevelValueChanged(TMP_Dropdown change)
    {
        //when value changes change the image
    }


    public void ExitGame()
    {
        Application.Quit();
        Debug.Log("Closing Application");
    }

    public void LoadCorrectScene(int sceneIndex)
    {
        SceneManager.LoadScene(sceneIndex);
    }

}