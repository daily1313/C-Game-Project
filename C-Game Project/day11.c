#include "header.h"
int main(void)
{
	char level;
	printf("난이도를 선택하세요.(1,2,3)");
	scanf_s("%c", &level,1);
	LoadMaze(level);
	
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("%c ", maze[i][j]);
		}
		printf("\n");
	}
}


