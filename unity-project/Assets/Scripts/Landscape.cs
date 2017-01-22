using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Landscape : MonoBehaviour {

	public float speed;
	public float distanceBetween;
	public float posToMoveAt;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		foreach (Transform child in transform) {
			child.transform.Translate(Vector3.right * Time.deltaTime * speed);

			if (child.transform.position.z < posToMoveAt) {
				child.transform.Translate(Vector3.left * distanceBetween * 2);
			}
		}
	}
}
