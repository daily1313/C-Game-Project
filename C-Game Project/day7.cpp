#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int is_prime(int num);
int main(void)
{
	printf("������ ����:");
	int n;
	scanf("%d", &n);
	int *num;
	num = (int*)malloc(sizeof(int) * n);

	int i;
	int cnt = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		int a = num[i];
		is_prime(a);
		if (is_prime(a) == 1) {
			cnt++;
		}

	}
	printf("�Ҽ��� ������ %d�Դϴ�.", cnt);
	free(num);
}
int is_prime(int num)
{
	int i;
	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}