#include <stdio.h>
#pragma warning(disable : 4996)

int input(int* arr) //값 입력 받는 함수
{
	int i;
	int sum = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i]; //입력 받을 때 더해줌
	}
	return sum;
}

int main(void)
{
	int arr[10];
	float avg = 0; //평균
	int High = 0; //평균보다 높은값
	int Low = 0; //평균보다 낮은값
	int i;

	avg = input(arr);

	avg /= 10;

	for (i = 0; i < 10; i++)
	{
		if (arr[i] >= avg)
		{
			High++;
		}
		else
		{
			Low++;
		}
	}
	printf("%.1f\n", avg);
	printf("%d %d", High, Low);

	return 0;
}