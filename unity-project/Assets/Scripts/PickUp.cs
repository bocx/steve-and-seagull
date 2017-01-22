using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickUp : MonoBehaviour {
	public GameObject player;
	public PlayerController playerController;
	public float speed = 5;
	private GameObject playerCharacter;

	// Use this for initialization
	void Start () {
		player = GameObject.Find ("Player");
		playerCharacter = GameObject.Find ("PlayerCharacter");
		playerController = (PlayerController) player.GetComponentsInChildren<PlayerController>()[0];
	}
	
	// Update is called once per frame
	void Update () {
		transform.Translate(Vector3.back * Time.deltaTime * speed);
	}

	void OnCollisionEnter(Collision other)
	{
		if (other.gameObject.name == playerCharacter.name)
		{
			playerController.PickUpItem ();
			Destroy (gameObject);
		}
	}
}
