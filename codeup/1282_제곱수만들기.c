#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n;
	int k = 0;
	int t = 0;
	int i;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) //n과 가장 가까운 제곱수를 찾기
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
	k = n - (t * t); //n에서 t^2을 빼서 k를 구함

	printf("%d %d", k, t);
	return 0;
}