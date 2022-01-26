#include "header.h"

void LoadMaze(char num)
{
	char path[20] = "./Maze";
	strncat(path, &num, 1);
	strcat(path, ".txt");
	char str_tmp[50] = { 0, };
	FILE* f = fopen(path, "r");
	for (int i = 0; i < SIZE; i++)
	{
		fgets(str_tmp, 50, f);
		char* ptr = strtok(str_tmp, "\t");
		for (int j = 0; j < SIZE; j++)
		{
			maze[i][j] = *ptr;
			ptr = strtok(NULL, "\t");
		}
	}
	fclose(f);
}
void GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void CursorView(char show)
{
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}
void PrintMazeGame()
{
	for (int i = 0; i < SIZE; i++)
	{
		GotoXY(XP, YP + i);
		for (int j = 0; j < SIZE; j++)
		{
			if (maze[i][j] == '1') {
				printf("бс");
			}
			else if (maze[i][j] == 'y') {
				printf("б┌");
			}
			else if (maze[i][j] == '0') {
				printf("бр");
			}
			else
				printf("б▄");

		}
		puts("");
	}
}
void Movemaze(int *x, int *y)
{
	int nkey;
	printf("бр");
	if (_kbhit())
	{
		nkey = _getch();

		if (nkey == ARROW)
		{
			nkey = _getch();
			switch (nkey)
			{
			case UP: 
				GotoXY(x, y - 1);
				*y = *y - 1;
				break;
			case DOWN:
				GotoXY(x, y + 1);
				*y = *y + 1;
				break;
			case RIGHT:
				GotoXY(x + 1, y);
				*x = *x + 1;
				break;
			case LEFT:
				GotoXY(x - 1, y);
				*x = *x - 1;
				break;
			
			}
		}
	}

}