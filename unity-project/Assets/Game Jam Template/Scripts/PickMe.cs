using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class PickMe : MonoBehaviour {

	// Use this for initialization
	void Update () {
		if (Input.anyKeyDown && EventSystem.current.currentSelectedGameObject == null)	{
			EventSystem.current.SetSelectedGameObject(gameObject);
		}
	}
}
