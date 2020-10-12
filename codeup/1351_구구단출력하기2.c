#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n1, n2;// 구구단 시작단 부터 마지막단까지
	int i, j;

	scanf("%d %d", &n1, &n2);

	for (i = n1; i <= n2; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d*%d=%d\n", i, j, i * j);
		}
	}

	return 0;
}