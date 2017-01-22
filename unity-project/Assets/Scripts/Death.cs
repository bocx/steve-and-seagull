using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Death : MonoBehaviour {
	public GameObject model;
	public PlayerController playerController;

	IEnumerator OnCollisionEnter(Collision other)
	{	
		if (other.collider.tag == "safety") {
			//var bounds = other.gameObject.transform.GetChild(0).GetComponent<MeshRenderer>().bounds;
			//Debug.Log(bounds.size.y);
			//transform.Translate(Vector3.up * 3);


			// TODO: no ei toimi kunnol... fix me
			transform.localPosition = new Vector3 (transform.localPosition.x, 4.0f, transform.localPosition.z);
		}

		if (other.gameObject.name == "Wave")
		{
			model.GetComponent<Animator>().Play("DEATH_");
			playerController.Kill ();
			yield return new WaitForSeconds(1);
			SceneManager.LoadSceneAsync(2);
		}
	}
}
