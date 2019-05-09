using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScence : MonoBehaviour {

	// Use this for initialization
	void Start () {
		EasyTTSUtil.SpeechAdd ("Welcome to Prejourney app, say start to continue.");
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void loadScence(string name){
		SceneManager.LoadScene (name);
	}
}
