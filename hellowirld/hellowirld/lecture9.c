/*
*작성자: 윤대영
* * 작성일 2024 0620
* 학습목표 c언어 기본 자료형 
* 정수혛
* char 1바이트(8비트) 2의8승개 256개 -128 ~ 127 256개
* short 2바이트 (16비트)  -2e15 ~ 2e15 -1   2e16
* int    4바이트 32비트 -2e31 ~ 2e31 -1  / 2e32
* long    4바이트 32비트
* long long 8바이트 64비트 -2e61 ~ 2e61 -1 / 2e62
* 
* 실수형
* float 4바이트 부호 지수부 가수부 // 소수점 6자리 표현
* double 8바이트 소수점 15자리표현
* long float 8바이트 소수점 18자리표현
* 
* 1부호 (msb) 0,1 음수 양수 
* 부호가 필요없다 unsigned
* undigned char 변수이름 0 ~ 2e8개 저장 부호 없는 정수 표현식 
* unsigned int  변수이름 0 ~ 2e32개 저장 
* 
* sizeof연산자 정수 n 바이트
* int i_nums = sizeof(int)
* int i_nums
* 
* 
* 상수
* 변하지않는 변수 
* 변수 자료
* 
* 종료 이름을 갖는 상수 이름을 갖지않는 상수 
*리더인 상수 문자그대로 변하지않는 수  
double my_double = 3.15;
* my_double = 2.96;
* 
*  
* int my_int = 10l; int //int 
* char my_char = 5;  //int 
* short my_short = 7; //int
* int my_int = 10억보다 큰수 21억 2e31-1// long long
* 리터럴 상수에서 
* 정수는 기본 자료형이 int 입니다 
* int 보다 큰구가 입력되면 자동으로 int 보다 큰 데이터 선택되어야한다
* 
* 가장많이처리하는 데이터타입 int 
* 
* 실수는 기본 자료형이 double 1
* my_double = 3.15;
* float my_float = 3.15;
* 
* my_long=3.151;
* UL
* LL
* ULL
* 
* 이름있는 상수 심볼리상수
* 중력의 크기 : -9.8f;
* 파이 3.141592...
* 
* 
*/


 #include "lectures.h"


void lecture9()
{
    printf("9강 시작");
    char test;
    printf("");
    // char short int long long long, float double longfloat
    
    printf("char 데이터크기 : %d＼n, sizeof(char) ");
    printf("short 데이터크기 : %d＼n sizeof (short)");
    printf("int 데이터크기 : %d＼n sizeof (int)");
    printf("long 데이터크기 : %d＼n sizeof (long)");
    printf("float 데이터크기 : %d＼n sizeof (float)");

    double my_double = 2.45;

    //scanf_s("%d", &test);

    // 문제 리터일 상수를 sizeof 연산지로출력해보세요
    // 3.15 3.15f 10 데이터 
    // 예를 들어 sizeof(5); 어떤값을 나타내는

    // 


}