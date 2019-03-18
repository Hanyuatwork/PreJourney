using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class camera_follow : MonoBehaviour {
	private static camera_follow instance;
	public static camera_follow Instance{
		get{ 
			if (instance == null) {
				instance = GameObject.FindObjectOfType<camera_follow> ();
			}
			return instance;
		}
	}


	public Transform ball;
	//public List<Transform> maps;
	//public List<Transform> triggers;

	//public float offset;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
//		map.localScale = new Vector3(2.0f, 2.0f, 0.0f);
		transform.position = new Vector3 (ball.position.x, ball.position.y, transform.position.z);
	}
}
