#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a, b, c, n; //���۰�, ���Ұ�, ���Ұ�, �� ����
	int result = 0;
	int i;

	scanf("%d %d %d %d", &a, &b, &c, &n);

	for (i = 1; i <= n; i++)
	{
		if (i == 1) //�� ������ 1�̸� a�� ���
		{
			result = a;
		}
		else
		{
			result = result * b + c;
		}
	}
	printf("%d", result);

}