#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n;
	int put;
	int i;
	int sum = 0;

	scanf("%d", &n); //수의 갯수 입력

	for (i = 0; i < n; i++) //n개까지 반복
	{
		scanf("%d", &put); //수 입력
		sum += put; //sum에 입력한 put을 더함
	}
	printf("%d", sum);
	return 0;
}
