/*
4강 escape 문자 
작성자  : 윤대영
작성일 : 2024-06-13
학습목표 : 이스케이프 문자 사용 
*/





#include <stdio.h>

int main(void)
{
	int num = 500;
	printf("지금 보유한 금액 : 500원 ＼n");
	printf("＼"지금 보유한 금액 : % d원＼" ＼n", num);
	    ＼n : 한줄을 띄어준다, new line
		＼a :
	    ＼t :
		＼b :
		＼r :
		＼＼, ＼ ? , ＼", ＼' ;
		
		printf("지금 보유한 금액 %d원 ＼n");
		printf(:"＼a");
		printf("hello＼b＼bhi＼n");
		printf("안녕하세요＼r안녕＼n");
		printf("반갑습니다. ＼n");
		printf("＼＼ ＼' ＼" ＼ ? 에러가 발생 하나요 ? ＼n");

			int num1;
		num1 = 10;
		// 2 변수초기화
		int num2 = 20;
		//3 변수를 동시애 선언, 단 같은 데이터 형태만 가능 
		int num3, num4, num5;
		num3 = 10, un4 = 20, num5 = 30;
		printf("%d %d %c", num3, num4, num5);
		//4 변수를 동시에 선언과 함꼐 할당
		// 변수이름 작성시 주의사항
		// 변수의 이름에 숫자가들어가면 안된다
		// #,$ 특수 기호를 이름으로 사용할수없다
		// 키워드로이름으로 사용할수없다.






	printf("지금 보유한 금액 : %d원 ＼n" , num);
	return 0;
}