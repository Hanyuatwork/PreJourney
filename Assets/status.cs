using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class status : MonoBehaviour {

	public Image healthBar;
	public Text time;
	private float maxHP;
	private float CurrentHP;
	private float percentage;
	private float timer;

	// Use this for initialization

	private static status instance;
	public static status Instance{
		get{ 
			if (instance == null) {
				instance = GameObject.FindObjectOfType<status> ();
			}
			return instance;
		}
	}


	void Start () {
		maxHP = 100;
		CurrentHP = 100;
		timer = 0;
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		percentage = CurrentHP / maxHP;
		healthBar.fillAmount = ( (percentage<=1)?  percentage:1);	
		timer += Time.deltaTime;
		getTime ();
	}

	public void loseHeath(){
		this.CurrentHP -= 10;
	}

	public void getTime(){
		int sec = (int)(timer % 60);
		int min = (int)(timer / 60 % 60);
		int hour = (int)(timer / 3600 % 24);
		string T_sec, T_min, T_hour;

		if (sec >= 10) {
			T_sec = sec.ToString ();
		} else {
			T_sec = '0' + sec.ToString();
		}

		if (min >= 10) {
			T_min = min.ToString ();
		} else {
			T_min = '0' + min.ToString();
		}

		if (hour >= 10) {
			T_hour = hour.ToString ();
		} else {
			T_hour = '0' + hour.ToString();
		}


		if (hour == 0) {
			time.text = T_min + ":" + T_sec;
		} else {
			time.text = T_hour + ":" + T_min + ":" + T_sec;
		}
	}

}
