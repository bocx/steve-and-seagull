﻿using UnityEngine;

public class Rotator : MonoBehaviour
{
	public float speed;

	void Update()
	{
		transform.Rotate(Vector3.up * Time.deltaTime * speed);
	}
}
