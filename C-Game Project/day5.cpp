#pragma warning(disable:4996)
#include <stdio.h>
void sum(int x, int y);
void sub(int x, int y);
void div(int x, int y);
void mul(int x, int y);
int main(void)
{
	int a, b;
	void(*fptr[4])(int, int) = {sum,sub,div,mul};
	char op;
	printf("연산종류(+,-,*,/):");
	scanf("%c", &op);
	printf("a:");
	scanf("%d", &a);
	printf("b:");
	scanf("%d", &b);
	switch (op) {
	case '+':
		fptr[0](a, b);
		break;
	case '-':
		fptr[1](a, b);
		break;
	case '*':
		fptr[2](a, b);
		break;
	case '/':
		fptr[3](a, b);
		break;

	}
}
void sum(int x, int y)
{
	printf("%d+%d=%d",x,y,x+y);
}
void sub(int x, int y)
{
	printf("%d-%d=%d", x,y,x-y);
}
void mul(int x, int y)
{
	printf("%d*%d=%d", x, y, x*y);
}
void div(int x, int y)
{
	printf("%d/%d=%d", x, y, x/y);
}