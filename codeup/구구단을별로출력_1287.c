#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n; //�Է�
	int i, j; //for��

	scanf("%d", &n);

	for (i = 1; i <= 9; i++) //�������̴ϱ� 1~9����
	{
		for (j = 1; j <= n * i; j++) //���� n���� ����ؾߵǴµ� ���� ��� 2��� ù�ٿ��� 2�� ��°�ٿ��� 4���� �þ���ϹǷ� n*j�� ����
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}