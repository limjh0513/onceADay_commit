//n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷�
#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n; //�Է� ���� ����
	int i; //for�� ���
	int sum = 0; //���� �� ����
	scanf("%d", &n);

	for (i = 1; i <= n; i++) //1~n������ ��
	{
		sum += i;
	}
	printf("%d", sum);

	return 0;
}