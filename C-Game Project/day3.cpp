#pragma warning(disable:4996)
#include <stdio.h>
#define size 5
void Max_result(int arr[], int t, int** result);
int main()
{
	int arr[size];
	int i = 0;
	int t = 5;
	int* max;
	while (t--) {
		scanf("%d", &arr[i]);
		i++;
	}
	Max_result(arr, size, &max);
	

}
void Max_result(int arr[],int t ,int **result) {
	int i;
	int* max;
	max = arr; //주소를 지정하기 위함.
	for (i = 1; i < t; i++) {
		if (arr[i] > *max) {
			max = &arr[i]; 
		}
	}
	*result = max;
	printf("최댓값: %d", **result);

}