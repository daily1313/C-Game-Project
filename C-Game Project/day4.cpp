#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a[3][3];
	int b[3][3];

	int(*ptr)[3] = a;
	int(*ptr2)[3] = b;
	int i,j;
	printf("[행렬A]\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	printf("[행렬B]\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	printf("\n");
	int sum[3][3] = { 0 };
	int k;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 3; k++) {
				sum[i][j] += (*(*(ptr + i) + k)) * (*(*(ptr2 + k) + j));
				
			}
		}
		printf("\n");
	}
	printf("[행렬A]\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	printf("[행렬B]\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%4d", b[i][j]);
		}
		printf("\n");
	}
	printf("[행렬곱]\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%4d", sum[i][j]);
		}
		printf("\n");
	}
	
}