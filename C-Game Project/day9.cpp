#include "calc.h"
int main(void)
{
	int n1, n2;
	scanf("%d", &n1);
	scanf("%d", &n2);
	sum(n1, n2);
	sub(n1, n2);
	mul(n1, n2);
	div(n1, n2);
}