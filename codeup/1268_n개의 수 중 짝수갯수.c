#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
	int* ar; //�����Ҵ� -> �迭
	int n; // n�� �Է�
	int i;
	int cnt = 0; // ¦�� ����

	scanf("%d", &n); //�Է�

	ar = (int*)malloc(n * sizeof(int));

	for(i = 0; i < n; i++)
	{
		scanf("%d", &ar[i]); //�� �Է�
	}

	for (i = 0; i < n; i++)
	{
		if (ar[i] % 2 == 0) //2�� ������ �� �������� 0�̸� ¦��
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	free(ar);

	return 0;
}