#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	int *score;
	score = (int*)malloc(sizeof(int) * 10);
	int i;
	int sum = 0;
	printf("학생의 수:");
	scanf("%d", &number);
	for (i = 0; i < number; i++)
	{
		printf("학생%d:", i + 1);
		scanf("%d", &score[i]);
		sum += score[i];
	}
	int avg = sum / number;
	printf("평균:%d", avg);
	free(score);
	

}