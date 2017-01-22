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
	}

	void MoveSafety(GameObject safety) {
		safety.transform.Translate(Vector3.back * Time.deltaTime * speed);
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

	// Update is called once per frame
	void Update () {
		if (Time.frameCount % 100 == 0) {
			
			GameObject newSafety = new GameObject();

			newSafety.transform.position = new Vector3(
				edgeLeft.transform.position.x + Random.value * (edgeRight.transform.position.x - edgeLeft.transform.position.x),
				0,
				horizonZPos
			);

			GameObject newRenderedSafety = Instantiate(types[0], newSafety.transform.position, new Quaternion());
			newRenderedSafety.transform.rotation.SetLookRotation(new Vector3(Random.value, 0, Random.value));
			newRenderedSafety.transform.localScale = new Vector3(
				(float)(Random.value * 0.3),
				(float)(Random.value * 0.3),
				(float)(Random.value * 0.3)
			);
			newRenderedSafety.transform.parent = newSafety.transform;

			safeties.Add(newSafety);
		}

		safeties.ForEach(safety => {
			MoveSafety(safety);

			if (!WithinArea(safety)) {
				safeties.Remove(safety);
				Destroy(safety);
			}
		});
	}
}
