using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class auto_start : MonoBehaviour {
	public Text txt;

	// Use this for initialization
	void Start () {
		//EasyTTSUtil.Initialize (EasyTTSUtil.UnitedStates);
		EasyTTSUtil.SpeechAdd ("Welcome to Prejourney app, say start to continue.");
		RecordingCanvas.Instance.OnStartRecordingPressed ();
	}
	
	// Update is called once per frame
	void Update () {
		string s = txt.text;
		string[] s2 = s.Split (' ');
		string start = "start";
		int pos = Array.IndexOf (s2, start);

		if (pos>-1) {
			RecordingCanvas.Instance.OnStartRecordingPressed ();
			ChangeScence.Instance.loadScence ("Scene");

		}
	}
}
