using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBall : MonoBehaviour
{
    public float jumpP = 10;
    bool isJump;
    public int itemCount;
    Rigidbody rb;
    // Start is called before the first frame update
    void Awake()
    {
        isJump = false;
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        float h = Input.GetAxisRaw("Horizontal");
        float v = Input.GetAxisRaw("Vertical");
        rb.AddForce(new Vector3(h, 0 ,v), ForceMode.Impulse);
    }

    private void Update()
    {
        if (Input.GetButtonDown("Jump") && !isJump)
        {
            isJump = true;
            rb.AddForce(new Vector3(0, jumpP, 0), ForceMode.Impulse);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if ( collision.gameObject.name == "Floor")
        {
            isJump = false ;
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Item")
        {
            GetComponent<AudioSource>().Play();
        }
    }
}
