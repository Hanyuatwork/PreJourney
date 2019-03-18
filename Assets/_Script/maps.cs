using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class maps : MonoBehaviour {
	private static maps instance;
	public static maps Instance{
		get{ 
			if (instance == null) {
				instance = GameObject.FindObjectOfType<maps> ();
			}
			return instance;
		}
	}
		
	public List<GameObject> map;
	public List<GameObject> trigger;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
