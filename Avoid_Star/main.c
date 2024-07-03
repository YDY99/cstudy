#include <stdio.h> // printf, scanf 함수를 사용하기 위해서 필요하다.	// 시스템 폴더의 헤더파일을 불러온다.
#include "Console.h" // 프로젝트 안에 ""안에 있는 파일을 찾아서 복사해라
#include <stdbool.h>
#include "time.h"
#include <stdlib.h>

#define MAX 30  // 전처리기로 MAX 숫자에 값을 10으로 전부 치환하는 코드 (컴파일 시점에)

// main함수에서 사용할 수 있게 키워드를 작성해주세요.

int main()
{
   // 콘솔창에 게임의 맵의 크기를 만들어 줘야 합니다.

	SetConsoleSize(30, 30);
	SetConsoleCursorVisibility(0);

	// 맵의 크기를 만들었다. 그 다음에 무엇을 하고 싶나요?
	// 캐릭터 + 움직인다.
	// 캐릭터의 위치 (14,28);

	// 플레이어의 총알 구현(Bullet)
	// GotoXY, Printf 함수를 사용해서 총알을 화면에 출력해보세요

	int x = 14, y = 28;	  // 플레이어의 x , y 좌표
	int bx = 0, by = 0;	  // 총알의 bx , by 좌표
	bool bullet = false;  // 현재 총알이 생성되지 않았으면 false, 생성됬으면 true

#if false // 별을 한개 씩 떨어뜨리는 코드( 비활성화 )
	int ex = 0, ey = 0;   // 별(몬스터)의 x, y 좌표
	bool enemy = false;   // 몬스터가 시작할 때 False, 생성될 때 True
#endif
   // 배열로 별을 생성하는 코드
	int ex[MAX] = { 0 };
	int ey[MAX] = { 0 };
	bool enemy[MAX] = { false };
	srand(time(NULL)); // rand() 랜덤 함수의 Seed 값을 현재 시간에 따라서 변경 시켜주는.

#if true // 플레이어의 이동 조작
	while (true) // 무한 루프
	{
		Clear();      // 이전 위치를 지우고 새로 그리기 위해서

#if false
		// 별(Enemy) 생성
		if (!enemy)	 // enemy가 없으면 생성해라
		{
			// ( rand() % 15 ) //    rand( ) => 0 ~ 25947 랜덤숫자반환 // 0 ~ 14 반환해주는 값
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


		if (GetAsyncKeyState(VK_LEFT) & 8001) // 왼쪽 키를 눌렀을 때
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
		printf("▲");  //

#if true // 총알
		if (GetAsyncKeyState(VK_SPACE) & 8001)
		{
			if (!bullet)	 // !bullet과 bullet == false 같은 의미
			{
				bx = x;
				by = y - 1;
				bullet = true;
			}
		}

		if (bullet)	// 총알이 생성되어 있을 경우에만
		{
			by--; // 한 칸위로 움직이고
			GotoXY(bx, by);
			printf("↑");

			if (by < 1)	    // 총알이 화면 가장 위로 넘어갔을 때 총알이 비활성화된다.
				bullet = false;
		}
#endif
#if false
		// 별(Enemy) 이동 구현
		if (enemy)
		{
			GotoXY(ex, ey);
			printf("☆");
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
				printf("☆");
				ey[i]++;

				if (ey[i] > 28)
					enemy[i] = false;
			}
		}


		Sleep(100); // 숫자만큼 기다렸다가 다시 실행한다.

	}

}