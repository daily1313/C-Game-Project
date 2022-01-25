#include "header.h"



int main(void)
{
	CursorView(0);
	char level;
	GotoXY(XP, YP - 3);
	printf("미로 찾기 게임\n");
	GotoXY(XP, YP - 2);
	printf("난이도를 선택하세요.(1,2,3)");
	scanf_s("%c", &level, 1);

	LoadMaze(level);
	while (1)
	{
		PrintMazeGame();
	}
}