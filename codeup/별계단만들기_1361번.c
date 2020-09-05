#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n; //입력
	int i; //for문
	int j; //for문

	scanf("%d", &n);

	for (i = 0; i < n; i++) //i를 0으로 해주고 n보다 작을 때 까지 실행
	{
		for (j = 0; j < i; j++) //j를 0으로 해주고 i보다 작을 때 까지 실행
		{
			printf(" "); //공백 출력
		}
		printf("**\n"); // 별 두개를 출력
	}

	return 0;
}