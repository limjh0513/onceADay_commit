#include <stdio.h>
#pragma warning(disable : 4996)
int factorial(int n)
{
	if (n == 0) // 0�϶����� return 1�� ����
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1); // ���丮���� 1���� n���� ���ϴ� ���̹Ƿ� n*n-1�� ����
	}
}

int main(void)
{
	int n; // �Է¹��� ����
	int result = 0; //��

	scanf("%d", &n); // �Է�
	result = factorial(n); //result��� ������ factorial �Լ��� ȣ�� �Ͽ� return ���� ���� ����

	printf("%d", result); //���

	return 0;
}