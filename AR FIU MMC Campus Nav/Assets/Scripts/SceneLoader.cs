using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    public void LoadNextScene() {
        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex; //gets integer of active scene
        SceneManager.LoadScene(currentSceneIndex + 1); //loads next scene
    }

    public void LoadStartScene() {
        SceneManager.LoadScene(0); //start scene = index : 0
    }
}
