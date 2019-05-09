	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;

	public class PathFinding : MonoBehaviour {
		
		public List<Transform> Poss = new List<Transform> ();
		public List<Transform> Doors = new List<Transform> ();

		public LineRenderer Line;
		public GameObject ball;
		public Transform DoorParent;
		public Transform PosParent;
		Vector3 Destination;

		public float timer=0;
		
		void Start () {

			foreach (Transform child in DoorParent) {
				Doors.Add (child);
			}
			foreach (Transform child in PosParent) {
				Poss.Add (child);
			}
			int rand = (int)Random.Range (0, Doors.Count);
			//Destination = Doors [rand].position;
			Destination = Doors [4].position;

			drawLine ();
		}
		//OUTTER
		//upper left -3.75, 8.77
		//upper right 2.5
		//lower left -3.79, -8.45
		//lower right 2.6

		//Inner
		//upper left -2.91, 7.85
		//upper right 1.57
		//lower left -2.8, -6.8
		//lower right 1.45



		void Update () {
				drawLine ();
		}

		private bool inPathway(){
			Vector3 p = ball.GetComponent<Transform> ().position;
			if ((p.x >= -3.75 && p.x <= 2.5 && p.y >= 7.85 && p.y <= 8.75) ||
			    (p.x >= -3.75 && p.x <= 2.5 && p.y >= -8.45 && p.y <= -6.8) ||
			    (p.x >= -3.75 && p.x <= -2.9 && p.y >= -6.8 && p.y <= 7.85) ||
			    (p.x >= 1.57 && p.x <= 2.5 && p.y >= -6.8 && p.y <= 7.85)) {
				return true;
			} else {
				return false;
			}
		}

		private Vector3 closestDoor(){
			Vector3 p = ball.GetComponent<Transform> ().position;
			Vector3 answer = Doors [0].position;
			float A_distance = Vector3.Distance(p, answer);
			foreach (Transform door in DoorParent) {
				if (Vector3.Distance (p, door.position) < A_distance) {
					A_distance = Vector3.Distance (p, door.position);
					answer = door.position;
				}
			}
			return answer;
		}

		private void drawLine(){
		//Debug.Log ("checher 1");

			Vector3 P_ball = ball.GetComponent<Transform> ().position;
			float min_distant = Vector3.Distance(Poss[0].position,P_ball);
			int ClosestPos = 0;
			float Destination_min_distant = Vector3.Distance(Poss[0].position,Destination);
			int Destination_ClosestPos = 0;

			for(int i = 0; i<Poss.Count;++i) {
				if (Vector3.Distance (Poss [i].position, P_ball)< min_distant) {
					min_distant = Vector3.Distance (Poss [i].position, P_ball);
					ClosestPos = i;
				}
				if (Vector3.Distance (Poss [i].position, Destination)< Destination_min_distant) {
					Destination_min_distant = Vector3.Distance (Poss [i].position, Destination);
					Destination_ClosestPos = i;
				}
			}

			List<Vector3> Points = new List<Vector3>();
			Points.Add (P_ball);
			if (!inPathway()) {
				Points.Add (closestDoor ());
			}
		//Debug.Log ("checher 2");

		if (ClosestPos != Destination_ClosestPos) {
			float D_clockwise = 0;
			float D_counter_clockwise = 0;
			if (ClosestPos < Destination_ClosestPos) {

				for (int i = ClosestPos; i < Destination_ClosestPos; ++i) {
					D_counter_clockwise += Vector3.Distance (Poss [i].position, Poss [i + 1].position);
				}

				for (int i = ClosestPos; i > 0; --i) {
					D_clockwise += Vector3.Distance (Poss [i].position, Poss [i - 1].position);
				}

				for (int i = Poss.Count - 1; i > Destination_ClosestPos; --i) {
					D_clockwise += Vector3.Distance (Poss [i].position, Poss [i - 1].position);
				}

			} else {//ClosestPos > Destination_ClosestPos

				for (int i = Destination_ClosestPos; i > ClosestPos; --i) {
					D_clockwise += Vector3.Distance (Poss [i].position, Poss [i - 1].position);
				}

				for (int i = ClosestPos; i > Poss.Count; --i) {
					D_counter_clockwise += Vector3.Distance (Poss [i].position, Poss [i + 1].position);
				}

				for (int i = 0; i > Destination_ClosestPos; --i) {
					D_counter_clockwise += Vector3.Distance (Poss [i].position, Poss [i + 1].position);
				}

			}

			if (D_clockwise > D_counter_clockwise) {
				if (ClosestPos < Destination_ClosestPos) {
					for (int i = ClosestPos; i <= Destination_ClosestPos; ++i) {
						Points.Add (Poss [i].position);
					}
				} else if (ClosestPos > Destination_ClosestPos) {
					for (int i = ClosestPos; i <= Poss.Count; ++i) {
						Points.Add (Poss [i].position);
					}
					for (int i = 0; i <= Destination_ClosestPos; ++i) {
						Points.Add (Poss [i].position);
					}
				} 
			} else {
				if (ClosestPos < Destination_ClosestPos) {
					for (int i = ClosestPos; i >= 0; --i) {
						Points.Add (Poss [i].position);
					}
					for (int i = Poss.Count - 1; i >= Destination_ClosestPos; --i) {
						Points.Add (Poss [i].position);
					}
				} else if (ClosestPos > Destination_ClosestPos) {
					for (int i = ClosestPos; i >= Destination_ClosestPos; --i) {
						Points.Add (Poss [i].position);

					}
				} 

			}
		}
		//Debug.Log ("checher 4");
			
			if (ClosestPos == Destination_ClosestPos) {
				Points = new List<Vector3> ();
				Points.Add (P_ball);
			}
		//Debug.Log ("checher 5");
			
			Points.Add (Destination);
			Line.positionCount = Points.Count;
			for (int i = 0; i < Line.positionCount; ++i) {
				Line.SetPosition (i, Points [i]);
			}

			Line.startWidth = 0.05f;
			Line.endWidth = 0.05f;
		}



	}
