#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
int main(void)
{
	int arr[4][4];// �迭�� �ʱ�ȭ�� ���־�� �Ѵ�.
	int row = sizeof(arr) / sizeof(arr[0]); // ���� ��
	int col = sizeof(arr[0]) / sizeof(arr[0][0]); // ���� ��
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d ", &arr[i][j]);
		}
	}
	printf("[���� ��]\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

	printf("[���� ��]\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%3d", arr[j][i]);//��� ���� ��ġ�� �ٲ��ش�.
		}
		printf("\n");
	}
	return 0;

}