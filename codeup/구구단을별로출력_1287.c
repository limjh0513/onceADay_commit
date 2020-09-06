#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n; //입력
	int i, j; //for문

	scanf("%d", &n);

	for (i = 1; i <= 9; i++) //구구단이니까 1~9까지
	{
		for (j = 1; j <= n * i; j++) //별은 n개를 출력해야되는데 예를 들어 2라면 첫줄에는 2개 둘째줄에는 4개로 늘어나야하므로 n*j를 해줌
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}