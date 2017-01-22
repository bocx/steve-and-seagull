using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaveController : MonoBehaviour {
	public float minSize = 1.0f;
	private GameObject wave;
	public GameObject whale;

	public float speed = 15.0f;
	private float endPosition = -90.0f;
	private Animator animator;
	private Vector3 startScale;

	// Use this for initialization
	void Start () {
		wave = GameObject.FindGameObjectWithTag ("wave");
		animator = whale.GetComponent<Animator> ();
		startScale = new Vector3 (wave.transform.localScale.x, 2.5f, wave.transform.localScale.z);
		wave.transform.localScale = startScale;
	}
	
	// Update is called once per frame
	void Update () {

		if (transform.localPosition.z > endPosition) {
			wave.transform.localScale = new Vector3 (
				wave.transform.localScale.x,
				Mathf.Max(wave.transform.localScale.y - 0.5f * Time.deltaTime, minSize),
				wave.transform.localScale.z
			);

			animator.Play ("Jumpwaggle");
			transform.localPosition = new Vector3 (0, 0, transform.localPosition.z + speed * -1 * Time.deltaTime);
		} else {
			transform.localPosition = new Vector3(0, 0, 0);
			wave.transform.localScale = startScale;
		}

	}
}
