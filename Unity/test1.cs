using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test1 : MonoBehaviour
{

    Vector3 target = new Vector3(8, 1.5f, 0);
    // Update is called once per frame
    void Update()
    {
        //1.등속운동 MoveTowards
        //transform.position = Vector3.MoveTowards(transform.position, target , 1f);


        //2.부드러운 이동 Smooth Damp()  
        //매개변수 반비레 속도 증가
        //ref 참조 접근
        //Vector3 velo = Vector3.zero;
        //transform.position = Vector3.SmoothDamp(transform.position, target, ref velo, 0.1f);

        //3.Lerp 위보다 감속이 김
        //transform.position = Vector3.Lerp(transform.position, target, 0.05f);

        //4,SLerp 구면 선형 보간 포물선 이동
        transform.position = Vector3.Slerp(transform.position, target, 0.005f);

    }
}
