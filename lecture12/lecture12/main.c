#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>



int frame0()
{
	printf("loading : #");
	return 0;
}

int frame1()
{
	printf("loading : ####");
	return 0;
}

int frame2()
{
	printf("loading : ########");
	return 0;
}

int frame3()
{
	printf("loading : #############");
	return 0;
}

int frame4()
{
	printf("Complete");
	return 0;
}



int main()
{
	clock_t deltaTimeStart = clock(NULL);
	
	int i = 0;
	
	while (i < 1)
	{
		COORD pos = { 0,0 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

		frame0();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		Sleep(1000);
		frame1();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		Sleep(1000);
		frame2();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		Sleep(1000);
		frame3();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		Sleep(1000);
		frame4();
		i = i + 1;
	}
	clock_t deltaTimeEnd = clock(NULL);

	printf("\n걸린 시간 : %d", deltaTimeEnd - deltaTimeStart);

	return 0;
}