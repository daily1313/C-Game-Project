#include "header.h"



int main(void)
{
	CursorView(0);
	char level;
	GotoXY(XP, YP - 3);
	printf("�̷� ã�� ����\n");
	GotoXY(XP, YP - 2);
	printf("���̵��� �����ϼ���.(1,2,3)");
	scanf_s("%c", &level, 1);

	LoadMaze(level);
	while (1)
	{
		PrintMazeGame();
	}
}