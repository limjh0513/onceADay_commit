#include <stdio.h>
#pragma warning(disable: 4996)

float HighTemCheck(float* arr, int n) //���� ���� �µ�
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

void printColor(float HighTem) //���� ���
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
	int n; // ������ ����
	float temArr[10]; //�µ��Է�
	float HighTem; //���� ���� �µ�
	int i; //for��

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