#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n; //�Է�
	int i; //for��
	int j; //for��

	scanf("%d", &n);

	for (i = 0; i < n; i++) //i�� 0���� ���ְ� n���� ���� �� ���� ����
	{
		for (j = 0; j < i; j++) //j�� 0���� ���ְ� i���� ���� �� ���� ����
		{
			printf(" "); //���� ���
		}
		printf("**\n"); // �� �ΰ��� ���
	}

	return 0;
}