// 기본 환경 설정
// 작성자 : 윤대영
// 시행날짜 : 6월12일 
// 학습주제 : 변수 
// 선언(deciare) : 변수를 어떻게 컴푸터한테 알려주나요 
// 컴파일러에게 변수가 무엇을 저장하고, 얼만큼 저장해야 하는지 알려주는 것.
// int : 무엇을 (정수),
// float : 무엇을 (실수),
// 선언 방법
// 데이터 형태 작성(int, float) 변수 이름 (a)
// 
// int a ;
// 할당
#include <stdio.h>

int main()
{
	int a = 5 + 3;
	int a = 4 + 7;
	printf("%d ＼n", a);
	float b = 3.2f + 4.7f;
	printf("%f", b);
	// 변수이름 
	int widsh = 12;
		int height = 10;
		int length = 8;
		//문제2 세번곱한값 무피 vloume 
		
		 int volume = widsh* height* length;
		 printf(: %d, volume);
		 // 문제3 volume / 165로 나누어 원하는 계산 값을 구한다, printf 함수로 출력하세요 
		 float volume_f = widsh * height * length;
		 volume_f = volume_f / 165; 
		 printf("문제1의답 %d ＼n , volume");
		 printf("문제3의답 %f ＼n", volume_f);


		//문재2-1 섭씨



		


	

	return 0;
}