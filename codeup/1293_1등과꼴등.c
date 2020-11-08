#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
	int* arr; //점수 입력배열
	int n; //점수 갯수
	int high = -1;//큰값
	int low = 101; //작은값
	int i; //for문

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (arr[i] > high)
		{
			high = arr[i];
		}
		if (arr[i] < low)
		{
			low = arr[i];
		}
	}
	printf("%d %d", high, low);

	free(arr);
	return 0;
}