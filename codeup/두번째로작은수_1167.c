#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr[3]; //3���� �� �Է�
	int c = 0;//2��°���� Ȯ��
	int i; //for��
	int second_small = 0; //�ι�°�� ���� ��

	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}

	if (arr[0] <= arr[1] && arr[0] >= arr[2]) //ù��°�� �Է��� ���ڰ� �ι�°�� ���� ���϶�
	{
		second_small = arr[0];
	}
	else if (arr[0] >= arr[1] && arr[0] <= arr[2]) //ù��°�� �Է��� ���ڰ� �ι�°�� ���� ���϶�
	{
		second_small = arr[0];
	}
	else //�ƴҶ���
	{
		if (arr[1] >= arr[0] && arr[1] <= arr[2]) //�ι�° �Է��� ���ڰ� �ι�°�� ���� ���϶�
		{
			second_small = arr[1];
		}
		else if (arr[1] <= arr[0] && arr[1] >= arr[2]) //�ι�° �Է��� ���ڰ� �ι�°�� ���� ���϶�
		{
			second_small = arr[1];
		}
		else //���� ������ ��� �������� �ʾ��� ������ ������ �Է��� ���ڰ� �ι�°�� ������ �̹Ƿ�
		{
			second_small = arr[2];
		}
	}

	printf("%d", second_small); //�ι�° �������� ������ش�.
	return 0;
}