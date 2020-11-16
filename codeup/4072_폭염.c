#include <stdio.h>
#pragma warning(disable: 4996)

float HighTemCheck(float* arr, int n) //가장 높은 온도
{
	float high = 0;
	for (int i = 0; i < n; i++)
	{
		if (high < arr[i])
		{
			high = arr[i];
		}
	}

	return high;
}

void printColor(float HighTem) //색깔 출력
{
	if (35 < HighTem)
	{
		printf("red");
	}
	else if (33 < HighTem)
	{
		printf("yellow");
	}
	else
	{
		printf("green");
	}
}

int main(void)
{
	int n; // 예상기온 갯수
	float temArr[10]; //온도입력
	float HighTem; //가장 높은 온도
	int i; //for문

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%f", &temArr[i]);
	}

	HighTem = HighTemCheck(temArr, n);

	printf("%.1f\n", HighTem);
	printColor(HighTem);

	return 0;
}