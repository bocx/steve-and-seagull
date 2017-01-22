using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wave : MonoBehaviour {

	public float maxSize = 8;
	public float growFactor = 3;
	public float waitTime = 1;
	public GameObject whale;

	public float endPosition = 0.0f;
	private float startPosition = 0.0f;

	IEnumerator Start()
	{
		startPosition = transform.localPosition.y;

		yield return new WaitForSeconds(5);
		StartCoroutine(Scale());
	}

	IEnumerator Scale()
	{
		float timer = 0;

		Animator animator = whale.GetComponent<Animator>();

		while (true) {
			if (endPosition > transform.localPosition.z) {
				// Move wave
				transform.localPosition = new Vector3(0, 0, transform.localPosition.z * Time.deltaTime);
				timer += Time.deltaTime;
				yield return null;
			}

			else {
				// Reset position
				transform.localPosition = new Vector3(0, 0, startPosition);
			}

			timer = 0;
			yield return new WaitForSeconds(waitTime);
		}



//		while(true) // this could also be a condition indicating "alive or dead"
//		{
//			// we scale all axis, so they will have the same value, 
//			// so we can work with a float instead of comparing vectors
//			while(maxSize > transform.localScale.x)
//			{
//				if (transform.localScale.sqrMagnitude < 0.01) {
//					animator.Play("Jumpwaggle");
//				}
//
//				timer += Time.deltaTime;
//				transform.localScale += new Vector3(1, 1, 1) * Time.deltaTime * growFactor;
//				yield return null;
//			}
//
//			if (maxSize < transform.localScale.x)
//			{
//				transform.localScale = new Vector3(0, 0, 0);
//			}
//
//			// reset the timer
//			timer = 0;
//			yield return new WaitForSeconds(waitTime);
//		}
	}
}