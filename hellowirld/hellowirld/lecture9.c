/*
*�ۼ���: ���뿵
* * �ۼ��� 2024 0620
* �н���ǥ c��� �⺻ �ڷ��� 
* ����
* char 1����Ʈ(8��Ʈ) 2��8�°� 256�� -128 ~ 127 256��
* short 2����Ʈ (16��Ʈ)  -2e15 ~ 2e15 -1   2e16
* int    4����Ʈ 32��Ʈ -2e31 ~ 2e31 -1  / 2e32
* long    4����Ʈ 32��Ʈ
* long long 8����Ʈ 64��Ʈ -2e61 ~ 2e61 -1 / 2e62
* 
* �Ǽ���
* float 4����Ʈ ��ȣ ������ ������ // �Ҽ��� 6�ڸ� ǥ��
* double 8����Ʈ �Ҽ��� 15�ڸ�ǥ��
* long float 8����Ʈ �Ҽ��� 18�ڸ�ǥ��
* 
* 1��ȣ (msb) 0,1 ���� ��� 
* ��ȣ�� �ʿ���� unsigned
* undigned char �����̸� 0 ~ 2e8�� ���� ��ȣ ���� ���� ǥ���� 
* unsigned int  �����̸� 0 ~ 2e32�� ���� 
* 
* sizeof������ ���� n ����Ʈ
* int i_nums = sizeof(int)
* int i_nums
* 
* 
* ���
* �������ʴ� ���� 
* ���� �ڷ�
* 
* ���� �̸��� ���� ��� �̸��� �����ʴ� ��� 
*������ ��� ���ڱ״�� �������ʴ� ��  
double my_double = 3.15;
* my_double = 2.96;
* 
*  
* int my_int = 10l; int //int 
* char my_char = 5;  //int 
* short my_short = 7; //int
* int my_int = 10�ﺸ�� ū�� 21�� 2e31-1// long long
* ���ͷ� ������� 
* ������ �⺻ �ڷ����� int �Դϴ� 
* int ���� ū���� �ԷµǸ� �ڵ����� int ���� ū ������ ���õǾ���Ѵ�
* 
* ���帹��ó���ϴ� ������Ÿ�� int 
* 
* �Ǽ��� �⺻ �ڷ����� double 1
* my_double = 3.15;
* float my_float = 3.15;
* 
* my_long=3.151;
* UL
* LL
* ULL
* 
* �̸��ִ� ��� �ɺ������
* �߷��� ũ�� : -9.8f;
* ���� 3.141592...
* 
* 
*/


 #include "lectures.h"


void lecture9()
{
    printf("9�� ����");
    char test;
    printf("");
    // char short int long long long, float double longfloat
    
    printf("char ������ũ�� : %d��n, sizeof(char) ");
    printf("short ������ũ�� : %d��n sizeof (short)");
    printf("int ������ũ�� : %d��n sizeof (int)");
    printf("long ������ũ�� : %d��n sizeof (long)");
    printf("float ������ũ�� : %d��n sizeof (float)");

    double my_double = 2.45;

    //scanf_s("%d", &test);

    // ���� ������ ����� sizeof ������������غ�����
    // 3.15 3.15f 10 ������ 
    // ���� ��� sizeof(5); ����� ��Ÿ����

    // 


}