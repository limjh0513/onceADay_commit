#include <stdio.h>
#pragma warning(disable : 4996)

int input(int* arr) //�� �Է� �޴� �Լ�
{
	int i;
	int sum = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i]; //�Է� ���� �� ������
	}
	return sum;
}

int main(void)
{
	int arr[10];
	float avg = 0; //���
	int High = 0; //��պ��� ������
	int Low = 0; //��պ��� ������
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