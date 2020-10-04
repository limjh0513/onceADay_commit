//n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램
#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n; //입력 받을 변수
	int i; //for문 사용
	int sum = 0; //더한 값 저장
	scanf("%d", &n);

	for (i = 1; i <= n; i++) //1~n까지의 합
	{
		sum += i;
	}
	printf("%d", sum);

	return 0;
}
