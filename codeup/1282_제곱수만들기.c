#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n;
	int k = 0;
	int t = 0;
	int i;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) //n�� ���� ����� �������� ã��
	{
		if (i * i <= n)
		{
			t = i;
		}
		else
		{
			break;
		}
	}
	k = n - (t * t); //n���� t^2�� ���� k�� ����

	printf("%d %d", k, t);
	return 0;
}