#define _YUHAN_C_WINDOW_USER

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _YUHAN_C_WINDOW_USER
#include <windows.h>
#endif

#ifdef _YUHAN_C_MAC_USER
#include <unistd.h>
#endif

int main(void)
{
	clock_t SJTstart;
	SJTstart = clock();

	int i = 0;

	while (i< 30)
	{		
		/*system("cls");*/

		COORD pos = { 0,0 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		
		printf("수정이가 %d번째 나에게 화를 내기 시작했다....\n", i+1, (int)SJTstart);
				
		printf("수정이의 분노 : ");
		
		int j = 0;
		while (j < i)
		{
			printf("#");
			j = j + 1;
		}		
		Sleep(100);
		i = i + 1;		
	}

	clock_t SJTend;
	SJTend = clock();

	printf("%dms만큼 화를 냈는데 지치지 않고 있다...\n", (int)(SJTend - SJTstart));
	
	
	/*char input[10];
	scanf_s("%d", input, 10);*/

	return 0;
}