#include "header.h"

int main(void)
{
	CursorView(0);
	int num_over = 0;
	int num_under = 20;
	while (1)
	{
		if (num_over < 20) {
			num_over++;
			system("cls");
			Sleep(100);
			GotoXY(40, num_over);
			printf("бр");
			if (num_over == 19) {
				num_under = 20;
			}
		}
		else if (num_under > 0) {
			num_under--;
			system("cls");
			Sleep(100);
			GotoXY(40, num_under);
			printf("бр");
			if (num_under == 1) {
				num_over = 0;
			}
		}
		
	
		
	}
}