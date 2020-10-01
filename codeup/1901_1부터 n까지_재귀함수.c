#include <stdio.h>
#pragma warning(disable : 4996)

void numberprint(int num)
{
	static int i = 1; //static 변수 하나를 만들어 재귀함수를 호출할 때 마다 전의 값을 유지
	if (i == num) //i와 num이 같으면
	{ 
		printf("%d\n", i); //출력만 해줌
	}
	else
	{
		printf("%d\n", i); //출력
		i++; //static i를 ++ 해줌
		numberprint(num); //재귀함수 호출
	}
	return 0; //return 0을 해주어 함수 종료
}

int main(void)
{
	int n; //수 입력

	scanf("%d", &n); //입력

	numberprint(n); //함수 호출

	return 0;
}