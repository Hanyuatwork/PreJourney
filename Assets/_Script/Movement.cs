using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Security.Cryptography.X509Certificates;
using UnityEngine.iOS;
using System.Text.RegularExpressions;

public class Movement : MonoBehaviour {
	//public GameObject ball;
	private Vector2 initial_position;
	private Vector2 direction;
	private string bathroomCollision = "";
	private string tts = "";
	public AudioSource footaudio;
	public AudioSource collisonaudio;
	public AudioSource dooraudio;
	public AudioSource speechaudio;
	public bool moving;
	private static Movement instance;
	public static Movement Instance{
		get{ 
			if (instance == null) {
				instance = GameObject.FindObjectOfType<Movement> ();
			}
			return instance;
		}
	}

	void Start () {
		footaudio.Play ();
		footaudio.mute = true;
		//collisonaudio.mute = true;
		EasyTTSUtil.Initialize (EasyTTSUtil.UnitedStates);
	}

	void OnApplicationQuit() 
	{
		EasyTTSUtil.Stop ();
	}


	void FixedUpdate () {
		if (Input.GetAxis ("Horizontal") != 0 || Input.GetAxis ("Vertical") != 0) {
			transform.Translate (Input.GetAxis ("Horizontal") * Time.deltaTime, Input.GetAxis ("Vertical") * Time.deltaTime, 0.0f);
			footaudio.mute = false;
		} else {
			footaudio.mute = true;
		
		}
		if (Input.touchCount > 0) {
			moving = true;
			Touch finger = Input.GetTouch (0);

			//Debug.Log (initial_position);
			switch (finger.phase) {
			case TouchPhase.Began:
				
				initial_position = finger.position;
				break;
			case TouchPhase.Moved:
				footaudio.mute = false;
				direction = finger.position - initial_position;

				if (direction.x > 0) {
					if (direction.y > 0) {
						if (direction.x > direction.y) {
							transform.Translate (1 * Time.deltaTime, direction.y / direction.x * Time.deltaTime, 0.0f);
							// x = 5  y = 3  then   x move 1  y move 3/5 = 0.6
						} else {
							transform.Translate (direction.x / direction.y * Time.deltaTime, 1 * Time.deltaTime, 0.0f);
							// x = 3 y = 5 then x move 3/5=0.6 and y move 1
						}
					} else {
						if (direction.x > -direction.y) {
							transform.Translate (1 * Time.deltaTime, direction.y / direction.x * Time.deltaTime, 0.0f);
							// x = 5 y = -3  then x move 1 y move -3/5 = -0.6
						} else {
							transform.Translate (-direction.x / direction.y * Time.deltaTime, -1 * Time.deltaTime, 0.0f);
							// x = 3 y = -5  then x move -3/-5 = 0.6 and y move 1
						}
					}
				} else if (direction.x < 0) {
					if (direction.y > 0) {
						if (-direction.x > direction.y) {
							transform.Translate (-1 * Time.deltaTime, -direction.y / direction.x * Time.deltaTime, 0.0f);
							// x = -5 and y = 3  then x move -1 and y move -3/-5 = 0.6
						} else {
							transform.Translate (direction.x / direction.y * Time.deltaTime, 1 * Time.deltaTime, 0.0f);
							// x = -3 and y = 5 then x move -3/5 = -0.6  and y move 1
						}

					} else {
						if (-direction.x > -direction.y) {
							transform.Translate (-1 * Time.deltaTime, -direction.y / direction.x * Time.deltaTime, 0.0f);
							// x=-5  y = -3  then  x move -1 and y move -(-3)/-5  = -0.6
						} else {
							transform.Translate (-direction.x / direction.y * Time.deltaTime, -1 * Time.deltaTime, 0.0f);
							// x= -3 y= -5  then x move -(-3)/-5 = -0/6  and y move -1
						}
					}
				}
					
				break;
			case TouchPhase.Stationary:
				footaudio.mute = false;
				direction = finger.position - initial_position;
				if (direction.x > 0) {
					if (direction.y > 0) {
						if (direction.x > direction.y) {
							transform.Translate (1 * Time.deltaTime, direction.y / direction.x * Time.deltaTime, 0.0f);
							// x = 5  y = 3  then   x move 1  y move 3/5 = 0.6
						} else {
							transform.Translate (direction.x / direction.y * Time.deltaTime, 1 * Time.deltaTime, 0.0f);
							// x = 3 y = 5 then x move 3/5=0.6 and y move 1
						}
					} else {
						if (direction.x > -direction.y) {
							transform.Translate (1 * Time.deltaTime, direction.y / direction.x * Time.deltaTime, 0.0f);
							// x = 5 y = -3  then x move 1 y move -3/5 = -0.6
						} else {
							transform.Translate (-direction.x / direction.y * Time.deltaTime, -1 * Time.deltaTime, 0.0f);
							// x = 3 y = -5  then x move -3/-5 = 0.6 and y move 1
						}
					}
				} else if (direction.x < 0) {
					if (direction.y > 0) {
						if (-direction.x > direction.y) {
							transform.Translate (-1 * Time.deltaTime, -direction.y / direction.x * Time.deltaTime, 0.0f);
							// x = -5 and y = 3  then x move -1 and y move -3/-5 = 0.6
						} else {
							transform.Translate (direction.x / direction.y * Time.deltaTime, 1 * Time.deltaTime, 0.0f);
							// x = -3 and y = 5 then x move -3/5 = -0.6  and y move 1
						}

					} else {
						if (-direction.x > -direction.y) {
							transform.Translate (-1 * Time.deltaTime, -direction.y / direction.x * Time.deltaTime, 0.0f);
							// x=-5  y = -3  then  x move -1 and y move -(-3)/-5  = -0.6
						} else {
							transform.Translate (-direction.x / direction.y * Time.deltaTime, -1 * Time.deltaTime, 0.0f);
							// x= -3 y= -5  then x move -(-3)/-5 = -0/6  and y move -1
						}
					}
				}
				break;
			case TouchPhase.Ended:
				footaudio.mute = true;
				moving = false;
				break;
			}
		
		}
	}


	IEnumerator OnCollisionEnter2D(Collision2D other){
		if (other.gameObject.tag == "Untagged") {
			collisonaudio.Play ();
			status.Instance.loseHeath ();
		}
		Debug.Log (other.gameObject.name);
		if (other.gameObject.tag == "map0") {
			yield return new WaitForSeconds (0.5f);
			maps.Instance.map [0].SetActive (false);
			maps.Instance.map [1].SetActive (true);
			maps.Instance.trigger [0].SetActive (false);
			maps.Instance.trigger [1].SetActive (true);
			camera_follow.Instance.ball.position = new Vector2 (4f, -6.25f);
	}
		if (other.gameObject.tag == "map1") {
			yield return new WaitForSeconds (0.5f);
			maps.Instance.map [0].SetActive (true);
			maps.Instance.map [1].SetActive (false);
			maps.Instance.trigger [0].SetActive (true);
			maps.Instance.trigger [1].SetActive (false);
			camera_follow.Instance.ball.position = new Vector2 (2.5f, -7.25f);

		}

		
	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.gameObject.tag == "door") {
			dooraudio.Play ();
		}
	}

	void OnTriggerPass2D(Collider2D other){
		if (other.gameObject.tag == "bathroom") {
			tts = "The women's bathrrom is on your left";
			EasyTTSUtil.SpeechAdd(tts);
		}
//		if (other.gameObject.tag == "bathroom") {
//			string bathroom = "";
//			string direction = "";
//			if (bathroomCollision == "") {
//				bathroomCollision = other.gameObject.name;
//			} else {
//				if (other.gameObject.name == "wBathroomRight" && bathroomCollision == "wBathroomLeft") {
//					bathroom = "women's bathroom";
//					direction = "left";
//				}
//				if (other.gameObject.name == "wBathroomRight" && bathroomCollision == "wBathroomRight") {
//					bathroom = "women's bathroom";
//					direction = "right";
//				}
//				if (other.gameObject.name == "mBathroomRight" && bathroomCollision == "mBathroomLeft") {
//					bathroom = "men's bathroom";
//					direction = "left";
//				}
//				if (other.gameObject.name == "mBathroomRight" && bathroomCollision == "mBathroomRight") {
//					bathroom = "men's bathroom";
//					direction = "right";
//				}
//				tts = $"The {bathroom} is on your {direction}";
//				EasyTTSUtil.SpeechAdd(tts);
//				bathroomCollision = "";
//			}
//		}
	}




}