#include <stdio.h>
#pragma warning(disable : 4996)
int factorial(int n)
{
	if (n == 0) // 0일때에는 return 1을 해줌
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1); // 팩토리얼이 1부터 n까지 곱하는 것이므로 n*n-1을 해줌
	}
}

int main(void)
{
	int n; // 입력받을 변수
	int result = 0; //값

	scanf("%d", &n); // 입력
	result = factorial(n); //result라는 변수에 factorial 함수를 호출 하여 return 받은 값을 저장

	printf("%d", result); //출력

	return 0;
}