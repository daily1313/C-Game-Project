#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
int main(void)
{
	int arr[4][4];// 배열은 초기화를 해주어야 한다.
	int row = sizeof(arr) / sizeof(arr[0]); // 행의 수
	int col = sizeof(arr[0]) / sizeof(arr[0][0]); // 열의 수
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d ", &arr[i][j]);
		}
	}
	printf("[변경 전]\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

	printf("[변경 후]\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%3d", arr[j][i]);//행과 열의 위치를 바꿔준다.
		}
		printf("\n");
	}
	return 0;

}