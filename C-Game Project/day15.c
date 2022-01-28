#include "header.h"

int main(void)
{
	int row = 2, col = 1;
	char level;
	CursorView(0);
	GotoXY(XP, YP - 3);
	printf("미로 찾기 게임\n");
	GotoXY(XP, YP - 2);
	printf("난이도를 선택하세요.(1,2,3)");
	scanf_s("%c", &level, 1);
	start = clock();
	LoadMaze(level);
	while (1)
	{
		PrintMazeGame();
		Movemaze(&row, &col);
	}
}