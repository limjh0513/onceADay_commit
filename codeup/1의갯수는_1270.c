#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int put; //수 입력
	int cnt = 0; //갯수
	int i; //for문 사용

	scanf("%d", &put);

	for (i = 1; i <= put; i++) //1부터 입력한 수 까지 반복
	{
		if (i % 10 == 1) //i를 10으로 나눴을 때 나머지가 1이라면 1의 자리수가 1인 수이므로
		{
			cnt++; //갯수 1개 추가
		}
	}
	printf("%d", cnt); //출력
	return 0;
}