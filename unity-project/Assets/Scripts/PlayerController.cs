using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
	public GameObject edgeLeft;
	public GameObject edgeRight;
	public GameObject model;
	private int items = 0;
	private GameObject playerCharacter;
	private Rigidbody rigidbody;
	private Death death;
	private Animator animator;
	private bool isKilled = false;
	public AudioSource[] audios;

	public Text countText;

	void Start() {
		playerCharacter = GameObject.Find ("PlayerCharacter");
		rigidbody = playerCharacter.GetComponent<Rigidbody> ();
		animator = model.GetComponent<Animator>();

		SetCountText ();
	}

	void Update()
	{
		if (isKilled) {
			return;
		}

		var x = Input.GetAxis("Horizontal") * Time.deltaTime * 15.0f;

		transform.position = new Vector3(
			Mathf.Min(Mathf.Max(transform.position.x + x, edgeLeft.transform.position.x), edgeRight.transform.position.x),
			transform.position.y,
			transform.position.z
		);
	}

	void FixedUpdate() {
		if (isKilled) {
			return;
		}

		if (Input.GetKeyDown ("space") && items > 0) {
			UseItem ();
			rigidbody.AddForce (new Vector3 (0, 10, 0), ForceMode.Impulse);
			animator.Play ("Jumping");

			var randomAudio = audios [Random.Range (0, audios.Length)];
			randomAudio.Play ();
		}
	}

	public void PickUpItem() {
		items = items + 1;
		SetCountText ();
	}

	void UseItem() {
		items = items - 1;
		SetCountText ();
	}

	void SetCountText() {
		countText.text = items.ToString();
	}

	public void Kill() {
		isKilled = true;
	}
}
