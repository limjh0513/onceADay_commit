#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr[3] = { 0, }; // �� �� �Է�
	int i, j; //for�� ���
	int small; //���� �� ���

	for (i = 0; i < 3; i++) //�Է�
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 2; i++) //���� 7 6 2��� �Է��ϸ� 1���� ���� �� 6 2 7�� ��µ� �׷��� ������ N-1ȸ �� 2ȸ ����
	{
		for (j = 0; j < 2; j++) //���� 3��°���� �����ϸ� ���� IF������ 3+1���� �����ϹǷ� �����Ⱚ�� ���� �� ���� 
		{
			if (arr[j] > arr[j + 1]) //N��° ���� N+1��° ���� ������ ����
			{
				small = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = small;
			}
		}
	}

	printf("%d %d %d", arr[0], arr[1], arr[2]); //���

	return 0;
}