#include "header.h"

int main(void)
{
	CursorView(0);
	int x = 60;
	int y = 15;
	while (1)
	{
		GotoXY(x, y);
		Movemaze(&x, &y);
		system("cls");
	}
}