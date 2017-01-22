using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Game : MonoBehaviour {

	public GameObject approachingDoom;
	public float speed;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		approachingDoom.transform.Translate(Vector3.back * Time.deltaTime * speed);

		if (approachingDoom.transform.position.z < 0) {
			SceneManager.LoadSceneAsync(3);
		}
	}
}
