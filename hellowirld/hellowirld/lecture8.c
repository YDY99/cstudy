#include "lectures.h"


void lecture8()
{
	int a_num = 15;
	printf("a_num의 a진수 표현 값을 10진수로 출력 : %d", a_num);

	a_num = 017;
	printf("a_num의 8진수 표현 값을 10진수로  출력 : %d＼n", a_num);
	 
	a_num = 0xf;
	printf("a_num의 16진수 표현 값을 10진수로 출력 : %d＼n", a_num);

	a_num = 0b1111;
	printf("a_num의 2진수 표현 겂을 2 진수로 출력 %d＼n", a_num);

	int b_num = -255;
     // 255를 2의 보수한값
	// 255 를 2진법으로 표현  0b 00000000 00000000 00000000 11111111
	// 255로 표현 한 반전     0b 11111111 11111111 11111111 00000001
	
	b_num = 0b1111111111111111111111000000001;
	printf("b_num의 값 : %d＼n", b_num);


	float a_float = 0.25;
	printf("a_float 출력 : %f", a_float);

	printf("부동 소수점의 에러");
	int bool = (0.1 + 0.2) == 0.3;
		printf("참이면 1 거짓이면 0을 출력합니다 0.1 + 0.2 = 0.3? %d", bool);


		float c_num = 0.0;
		for(int number =0; number <30; number++)
		c_num += 0.1;

		printf("c_num의 0.1을 30번 더한 값이 무엇인가? %f", c_num);

		int d = 0b00001111;
		int e = 0b00010010;
		int my_int = 0b00000010;
		int result = d l e;
		
		printf("내가 계산한 값 %d 실제값 %d", my_int, result);

		d = 0b0001111;
		e = ob0010010;
		my_int = 0b00;
		result = d ^ e;
		printf("내가 계산한 값 %d 실제값 %d", my_int, result);

		char overFlowedvalue = 0b01000000;
		// 0b10000000; -128
		// 0b01111111;
		// 0b10000000;
		// 2의 보수 반전 + 1;
		// char 1바이트 크기
		// 1 바이트 정수 
		// 양의 정수 법 위 : 0b [0] [111] [1111] : 0 -  1 ~ 127
		// 음의 정수 범위 : 0b [1] [000] [0000] : -128 ~ -1
		//                 0b[1] [111] [1111] : -1
		// -128 ~ -127 ( -128 ~ b-127)

		// 0b01000000 << 2;
		// overFlowedvalue = 0b10000000;
		//                  0b000000100; >> 8
		
		
		overFlowedvalue << 1;
		printf("%d", overFlowedvalue);
	    

			int twocomplememnt;
			scanf_s(" %d", &twocomplememnt);
			printf("2의 보수값을 출력 : %d", twocomplememnt);
			twocomplememnt = ~twocomplememnt + 1;

			char shiftNum = 64; // 4
			// 0b0100000;
			//scanf_s("%d", &shiftNum);
				// shiftNum <<= 3;
				shiftNum = shiftNum << 3;
				shiftNum = shiftNum >> 5;
				printf("8을 곱한후 32로 나눈 값 : %d", shiftNum);

			shiftNum = shiftNum << 3;
			shiftNum = shiftNum >> 5;
			
		

				








}
