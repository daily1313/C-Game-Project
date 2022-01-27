#include "header.h"
#define col 20

void move(int* x, int* y);
void goalline();

int main(void)
{
	CursorView(0);
	int x = 5;
	int y = 3;
	while (1)
	{
		goalline();
		GotoXY(x, y);
		move(&x, &y);
	}
}
void move(int* x, int* y)
{
	int nkey;
	printf("กÛ");
	if (_kbhit())
	{
		nkey = _getch();
		if (nkey == ARROW)
		{
			nkey = _getch();
			switch (nkey)
			{
			case UP: GotoXY(x, y - 1); *y = *y - 1; break;
			case DOWN: GotoXY(x, y + 1); *y = *y + 1; break;
			case LEFT: GotoXY(x-1, y); *x = *x - 1; break;
			case RIGHT:
					if (*x == col - 2) {
						system("cls");
						exit(0);
					}
					GotoXY(x + 1, y);
					*x = *x + 1;
					break;
					
				
			}
			system("cls");
		}
		
	}
}
void goalline() {
	for (int i = 0; i < col; i++) {
		GotoXY(col, i);
		printf("คำ");
	}
}