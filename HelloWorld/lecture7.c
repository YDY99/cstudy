/*
*  작성자 : 김동훈
*  작성일 : 2024-06-18
*  학습목표 : 컴퓨터가 데이터를 표현하는 방식
*/

// 진법
// 2진법, 10진법 , 16진법에 대해서 이해해보자.
// 진법이란 수를 표현하기 위한 방법으로, n진법은 n개의 기호로 수를 표현하는 방식이다.
// 2진법 : 0,1 수를 표현하는 방식.
// 10진법 : 0~9(10)개, 16진법(0 ~ 15)
// 진법으로 수의 계산
// 2진법 : 각 자리의 수에 0 또는 1이 들어간다. 
// 2의 n승으로 표현된 덧셈으로 10진수를 표현할 수 있다.
// 14수를 2진법으로 표현을 해보기.
// 16진법 왜 쓸까요? 	2진법으로 16진법을 표현하기 쉽기 때문입니다.

// 컴퓨터가 문자를 표현하는 비밀
// ASCII( American Standard Code for Information InterAction) 아스키코드
// 1Byte 2의 8승 만큼 수를 표현할 수 있다. 256개.
// 

void lecture7() 
{
	// 문자를 표현하는 방식.
	// char 데이터를 지정하는 방법 : 'n' (따옴표 안에 문자 작성)
	char firstCharacter = 'a';
	printf("문자를 출력해 봅시다 %c\n", firstCharacter);

	// 문자를 하나 변수에 지정하고 printf 그 문자를 출력해보세요.
	char y = 65;
	printf("char 데이터 형식에 정수를 넣으면 무엇이 나올까? : %c\n", y);

	// 정수형 변수 
	int sInt = 'A';
	printf("정수형 변수에 문자를 담았을 때 출력되는 결과 : %d \n", sInt);

	// 한글은 어떻게 숫자로 표현을 하고 있을까?

	printf("데이터 출력 문제 1\n");

	int fInt = 128;
	char fChar = fInt;
	printf("%d\n", fChar);
	// 예상 하는 값 : 128
	// 실제 결과 값 : -128

	// 양의 정수를 표현하는 방법
	// 1바이트 (8비트) 공간에서 부호 있는 정수를 표현하는 방법
	// MSN(Most Significant Number) : 0 이면 양수 1이면 음수.

	// 음의 정수를 표현하는 방법
	// MSN 1을 넣은 다음에 나머지 공간을 숫자로 표현하면 그것이 음수가 된다.
	// 2의 보수 방식으로 구할 수 있다.
	// 2의 보수 방식이란. 모든 비트 공간에 0과 1을 뒤바꾸어 준 후 1을 더해준다.

	// 오버 플로우
	// 데이터가 넘처흐르는 현상. 제한된 메모리를 초과해서 표현할 수 있는 범위를 넘어서면 엉뚱한 결과가 나오는 현상.
	// 오버플로우가 발생했다.

	printf("오버플로우 예시");
	char o_a, o_b, o_c;
	o_a = 100;
	o_b = 300;       // 128 양의 정수 표현 초과하면 -128 출력 순서대로. 44
	o_c = o_a + o_b; // 100 + 44 = 144 ( -127, -126, -125 .....   -113)

	printf("오버 플로우 결과 확인 : %d\n", o_c);

	// 문제 1. ASCII 'a'와'Z'를 숫자를 이용해서 출력해보세요.
	char char_a = 97;
	char char_Z = 90;

	printf("아스키 코드 값 a : %c, Z : %c\n", char_a, char_Z);
	
	// 문제 2. -255를 비트로 표현해보세요.
	// 255의 2의 보수의 방식으로 비트를 표현하세요와 같은말


	// 문제 3. src 변수에 scanf_s를 이용해서 숫자를 입력을 받고 
	// int src;
	// scanf_s
	// 아스키 문자로 출력할 수 있는 printf 변환을 작성해보세요.
	// printf.. 서식 문자 %c를 써서 Scanf_s로 받은 숫자를 아스키문자로 출력하게 표현.
	int src;
	scanf_s("%d", &src);
	printf("아스키 코드로 변환 %c", src);

}