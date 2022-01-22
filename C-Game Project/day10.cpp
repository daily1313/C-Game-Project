#pragma warning(disable:4996)
#include <windows.h>
#include <stdio.h>
void GotoXY(int x, int y);

void GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
int main(void)
{
	int n;
	scanf("%d", &n);
	int i = 0;
	while (n--) {
		GotoXY(i, i);
		printf("¤¡\n");
		i++;
	}
}

