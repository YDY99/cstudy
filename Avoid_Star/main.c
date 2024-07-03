#include <stdio.h> // printf, scanf �Լ��� ����ϱ� ���ؼ� �ʿ��ϴ�.	// �ý��� ������ ��������� �ҷ��´�.
#include "Console.h" // ������Ʈ �ȿ� ""�ȿ� �ִ� ������ ã�Ƽ� �����ض�
#include <stdbool.h>
#include "time.h"
#include <stdlib.h>

#define MAX 30  // ��ó����� MAX ���ڿ� ���� 10���� ���� ġȯ�ϴ� �ڵ� (������ ������)

// main�Լ����� ����� �� �ְ� Ű���带 �ۼ����ּ���.

int main()
{
   // �ܼ�â�� ������ ���� ũ�⸦ ����� ��� �մϴ�.

	SetConsoleSize(30, 30);
	SetConsoleCursorVisibility(0);

	// ���� ũ�⸦ �������. �� ������ ������ �ϰ� �ͳ���?
	// ĳ���� + �����δ�.
	// ĳ������ ��ġ (14,28);

	// �÷��̾��� �Ѿ� ����(Bullet)
	// GotoXY, Printf �Լ��� ����ؼ� �Ѿ��� ȭ�鿡 ����غ�����

	int x = 14, y = 28;	  // �÷��̾��� x , y ��ǥ
	int bx = 0, by = 0;	  // �Ѿ��� bx , by ��ǥ
	bool bullet = false;  // ���� �Ѿ��� �������� �ʾ����� false, ���������� true

#if false // ���� �Ѱ� �� ����߸��� �ڵ�( ��Ȱ��ȭ )
	int ex = 0, ey = 0;   // ��(����)�� x, y ��ǥ
	bool enemy = false;   // ���Ͱ� ������ �� False, ������ �� True
#endif
   // �迭�� ���� �����ϴ� �ڵ�
	int ex[MAX] = { 0 };
	int ey[MAX] = { 0 };
	bool enemy[MAX] = { false };
	srand(time(NULL)); // rand() ���� �Լ��� Seed ���� ���� �ð��� ���� ���� �����ִ�.

#if true // �÷��̾��� �̵� ����
	while (true) // ���� ����
	{
		Clear();      // ���� ��ġ�� ����� ���� �׸��� ���ؼ�

#if false
		// ��(Enemy) ����
		if (!enemy)	 // enemy�� ������ �����ض�
		{
			// ( rand() % 15 ) //    rand( ) => 0 ~ 25947 �������ڹ�ȯ // 0 ~ 14 ��ȯ���ִ� ��
			ex = (rand() % 15) * 2;
			ey = 0;
			enemy = true;
		}
#endif
		for (int i = 0; i < MAX; i++) {
			if (!enemy[i])
			{
				ex[i] = (rand() % 15) * 2;
				ey[i] = 0;
				enemy[i] = true;
				break;
		    }
		}


		if (GetAsyncKeyState(VK_LEFT) & 8001) // ���� Ű�� ������ ��
		{
			if (x < 1) x = 1;
			x--;          //
		}
		else if (GetAsyncKeyState(VK_RIGHT) & 8001) 
		{
			if (x > 27) x = 27;
			x++;          //
		}
		else if (GetAsyncKeyState(VK_UP) & 8001) 
		{
			if (y < 1) y = 1;
			y--;
		}
		else if (GetAsyncKeyState(VK_DOWN) & 8001)
		{
			if (y > 28) y = 28;
			y++;
		}
#endif
		GotoXY(x, y); //
		printf("��");  //

#if true // �Ѿ�
		if (GetAsyncKeyState(VK_SPACE) & 8001)
		{
			if (!bullet)	 // !bullet�� bullet == false ���� �ǹ�
			{
				bx = x;
				by = y - 1;
				bullet = true;
			}
		}

		if (bullet)	// �Ѿ��� �����Ǿ� ���� ��쿡��
		{
			by--; // �� ĭ���� �����̰�
			GotoXY(bx, by);
			printf("��");

			if (by < 1)	    // �Ѿ��� ȭ�� ���� ���� �Ѿ�� �� �Ѿ��� ��Ȱ��ȭ�ȴ�.
				bullet = false;
		}
#endif
#if false
		// ��(Enemy) �̵� ����
		if (enemy)
		{
			GotoXY(ex, ey);
			printf("��");
			ey++;

			if (ey > 28)
				enemy = false;

		}
#endif
		for (int i = 0; i < MAX; i++)
		{
			if (enemy[i])
			{
				GotoXY(ex[i], ey[i]);
				printf("��");
				ey[i]++;

				if (ey[i] > 28)
					enemy[i] = false;
			}
		}


		Sleep(100); // ���ڸ�ŭ ��ٷȴٰ� �ٽ� �����Ѵ�.

	}

}