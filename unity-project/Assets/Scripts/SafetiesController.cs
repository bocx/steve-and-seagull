using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SafetiesController : MonoBehaviour {

	public float speed = 10;

	public GameObject edgeLeft;
	public GameObject edgeRight;

	public float horizonZPos;
	public float nearEdgeZPos;

	public GameObject[] types;

	private List<GameObject> safeties;

	// Use this for initialization
	void Start () {
		safeties = new List<GameObject>();

		StartCoroutine(SafetySpawner());
	}

	void MoveSafety(GameObject safety) {
		float movingSpeed = safety.tag == "chili" ? speed / 2 : speed;

		safety.transform.Translate(Vector3.back * Time.deltaTime * movingSpeed);

	}

	bool WithinArea(GameObject safety) {
		Vector3 center = new Vector3(0, 0, (horizonZPos + nearEdgeZPos) / 2);
		Vector3 size = new Vector3(
			edgeRight.transform.position.x - edgeLeft.transform.position.x,
			100,
			horizonZPos - nearEdgeZPos + 10
		);

		return new Bounds(center, size).Contains(safety.transform.position);
	}

	IEnumerator SafetySpawner()
	{
		while (true) {
			yield return new WaitForSeconds((float)(0.5f + 1.0f * Random.value));

			AddSafety();
		}
	}

	void AddSafety() {
		GameObject newSafety = new GameObject();

		newSafety.transform.position = new Vector3(
			edgeLeft.transform.position.x + Random.value * (edgeRight.transform.position.x - edgeLeft.transform.position.x),
			0,
			horizonZPos
		);

		var randomType = Random.Range (0, types.Length);

		GameObject newRenderedSafety = Instantiate(types[randomType], newSafety.transform.position, new Quaternion());

		if (randomType < 3) {
			Quaternion newRotation = new Quaternion();
			newRotation.SetLookRotation(
				new Vector3(
					(float)(Random.value - 0.5),
					0,
					(float)(Random.value - 0.5)
				)
			);
			newRenderedSafety.transform.rotation = newRotation;

			newRenderedSafety.transform.localScale = new Vector3(
				(float)(0.2 + Random.value * 0.2),
				(float)(0.1 + Random.value * 0.1),
				(float)(0.2 + Random.value * 0.2)
			);
		}

		newRenderedSafety.transform.parent = newSafety.transform;

		safeties.Add(newSafety);
	}

	// Update is called once per frame
	void Update () {
		safeties.ForEach(safety => {
			MoveSafety(safety);

			if (!WithinArea(safety)) {
				safeties.Remove(safety);
				Destroy(safety);
			}
		});
	}
}
