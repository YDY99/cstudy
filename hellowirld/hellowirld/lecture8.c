#include "lectures.h"


void lecture8()
{
	int a_num = 15;
	printf("a_num�� a���� ǥ�� ���� 10������ ��� : %d", a_num);

	a_num = 017;
	printf("a_num�� 8���� ǥ�� ���� 10������  ��� : %d��n", a_num);
	 
	a_num = 0xf;
	printf("a_num�� 16���� ǥ�� ���� 10������ ��� : %d��n", a_num);

	a_num = 0b1111;
	printf("a_num�� 2���� ǥ�� ���� 2 ������ ��� %d��n", a_num);

	int b_num = -255;
     // 255�� 2�� �����Ѱ�
	// 255 �� 2�������� ǥ��  0b 00000000 00000000 00000000 11111111
	// 255�� ǥ�� �� ����     0b 11111111 11111111 11111111 00000001
	
	b_num = 0b1111111111111111111111000000001;
	printf("b_num�� �� : %d��n", b_num);


	float a_float = 0.25;
	printf("a_float ��� : %f", a_float);

	printf("�ε� �Ҽ����� ����");
	int bool = (0.1 + 0.2) == 0.3;
		printf("���̸� 1 �����̸� 0�� ����մϴ� 0.1 + 0.2 = 0.3? %d", bool);


		float c_num = 0.0;
		for(int number =0; number <30; number++)
		c_num += 0.1;

		printf("c_num�� 0.1�� 30�� ���� ���� �����ΰ�? %f", c_num);

		int d = 0b00001111;
		int e = 0b00010010;
		int my_int = 0b00000010;
		int result = d l e;
		
		printf("���� ����� �� %d ������ %d", my_int, result);

		d = 0b0001111;
		e = ob0010010;
		my_int = 0b00;
		result = d ^ e;
		printf("���� ����� �� %d ������ %d", my_int, result);

		char overFlowedvalue = 0b01000000;
		overFlowedvalue << 1;
		printf 

        int 









}
