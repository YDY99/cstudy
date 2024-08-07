#include <stdio.h>
#include "console.h"
#include <stdbool.h>
#include "time.h"
#include <stdlib.h>


void StartMenu(void)
{
	while (true)

		Clear();
		GotoXY(60,60 );
		printf("title the world warII FIGHTER SHOOT game");
		GotoXY(40,40 );
		printf("please click the enter key ");

int main()
'SetTitle("title the world warII FIGHTER SHOOT game");'
SetColor
SetConsoleSize(100,100 );
SetConsoleCursorVisibility(0);

int score = 0;

bool IsPlayerDead = false;
int x = 0, y = 0;	  
int bx = 0, by = 0;	  
bool bullet = ture;



#if ture // 
int ex = 0, ey = 0;   
bool enemy = ture
#endif
int ex[MAX] = { 50 };
int ey[MAX] = { 55 };
bool enemy[MAX] = { ture };
srand(time(NULL));


	StartMenu();

#if true 
while (true)
{
	Clear();

	GotoXY(0, 0);
	printf("Score %d ", score);
	score++;


#if false
	if (!enemy)	
	{ 
		ex = (rand() % 15) * 2;
		ey = 0;
		enemy = true;
}

#endif
	for (int i = 0; i < MAX; i++) {
		if (!enemy[i])
		{
			ex[i] = (rand() % 15) * 2;
			ey[i] = 1;
			enemy[i] = true;
			break;
		}



		if (GetAsyncKeyState(VK_LEFT) & 8001)
		{
			if (x < 1) x = 1;
			x -= 2;          //
		}
		else if (GetAsyncKeyState(VK_RIGHT) & 8001)
		{
			if (x > 27) x = 27;
			x += 2;          //
		}
		else if (GetAsyncKeyState(VK_UP) & 8001)
		{
			if (y < 2) y = 2;
			y--;
		}
		else if (GetAsyncKeyState(VK_DOWN) & 8001)
		{
			if (y > 28) y = 28;
			y++;
		}
#endif

#if true 
		if (GetAsyncKeyState(VK_SPACE) & 8001)
		{
			if (!bullet)	 
			{
				bx = x;
				by = y - 1;
				bullet = true;
			}
		}

		if (bullet)	
		{
			by--; 
			GotoXY(bx, by);
			printf("↑");

			if (by < 1)	    
				bullet = false;
		}
#endif
#if false
			if (enemy)
			{
				GotoXY(ex, ey);
				printf("🛰️");
				ey++;

				if (ey > 28)
					enemy = false;

			}
#endif
			for (int i = 0; i < MAX; i++)
			{
				if (enemy[i])
				{
					SetColor(BG, rand() % 15);
					GotoXY(ex[i], ey[i]);
					printf("🛰️");
					ey[i]++;

					
	if (bx == ex[i] && by == ey[i] && bullet)
	{
	bullet = false;
	enemy[i] = false;
			}



#if true 
	if (x == ex[i] && y == ey[i])	
	{
		if (!IsPlayerDead) 
		{
			GotoXY(x, y);
			printf("＊");
			IsPlayerDead = true;
		}
	}
	#endif
		if (ey[i] > 28)
			enemy[i] = false;
	}
				}
				if (!IsPlayerDead)
				{
					SetColor(BG, 12);
					GotoXY(x, y);
					printf("🛩️");
				}
				
				else
				{
					GotoXY(x, y);
					printf("❄️");
					break;
				}


				Sleep(1000);

	}

	GameOver();
} 
