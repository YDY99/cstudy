// �⺻ ȯ�� ����
// �ۼ��� : ���뿵
// ���೯¥ : 6��12�� 
// �н����� : ���� 
// ����(deciare) : ������ ��� ��Ǫ������ �˷��ֳ��� 
// �����Ϸ����� ������ ������ �����ϰ�, ��ŭ �����ؾ� �ϴ��� �˷��ִ� ��.
// int : ������ (����),
// float : ������ (�Ǽ�),
// ���� ���
// ������ ���� �ۼ�(int, float) ���� �̸� (a)
// 
// int a ;
// �Ҵ�
#include <stdio.h>

int main()
{
	int a = 5 + 3;
	int a = 4 + 7;
	printf("%d ��n", a);
	float b = 3.2f + 4.7f;
	printf("%f", b);
	// �����̸� 
	int widsh = 12;
		int height = 10;
		int length = 8;
		//����2 �������Ѱ� ���� vloume 
		
		 int volume = widsh* height* length;
		 printf(: %d, volume);
		 // ����3 volume / 165�� ������ ���ϴ� ��� ���� ���Ѵ�, printf �Լ��� ����ϼ��� 
		 float volume_f = widsh * height * length;
		 volume_f = volume_f / 165; 
		 printf("����1�Ǵ� %d ��n , volume");
		 printf("����3�Ǵ� %f ��n", volume_f);


		//����2-1 ����



		


	

	return 0;
}