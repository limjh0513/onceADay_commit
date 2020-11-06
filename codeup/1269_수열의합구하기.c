#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int a, b, c, n; //시작값, 곱할값, 더할값, 항 갯수
	int result = 0;
	int i;

	scanf("%d %d %d %d", &a, &b, &c, &n);

	for (i = 1; i <= n; i++)
	{
		if (i == 1) //항 갯수가 1이면 a를 출력
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