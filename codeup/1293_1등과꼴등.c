#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
	int* arr; //���� �Է¹迭
	int n; //���� ����
	int high = -1;//ū��
	int low = 101; //������
	int i; //for��

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