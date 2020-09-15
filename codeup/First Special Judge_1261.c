#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr[10];
	int i;
	int c = 1; //5의 배수가 출력이 안되었을 때 사용

	for (i = 0; i < 10; i++) //정수 10개를 입력받음
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++) //10번 반복
	{
		if (arr[i] % 5 == 0) //arr[i]가 5의 배수라면
		{
			c = 0; //c를 0으로 바꿔줌
			printf("%d", arr[i]); //출력
			break; //더 이상 출력하지 않아도 되므로 break
		}
	}
	if (c == 1) //c가 1일때, 즉 5의 배수가 출력되지 않았을 때
	{
		printf("0"); //0을 출력해줌
	}
	return 0;
}