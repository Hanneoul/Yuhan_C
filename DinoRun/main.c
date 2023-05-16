#include <stdio.h>

int main()
{
	int game_state = 1;

	char map[465];	/* 가로 : 30 + 1(개행문자)  세로 15  */
	
	int i = 1;
	while(i<466)
	{
      		map[i-1]='0';
		if( (i)%31 == 0)
			map[i-1] = '\n';
		i=i+1;
	}
	map[i] = '\0';

	printf("%s", map);

	return 0;
}
