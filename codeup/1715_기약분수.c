#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int boonja; //분자
	int boonmo; //분모
	int a; //기약분수로 만들 때 사용
	int i;
	int check = 1; // 0이 아닐 때 반복이라는 조건을 넣을 것이기 때문에 1로 초기화

	scanf("%d %d", &boonja, &boonmo); //분자와 분모 입력
	a = boonja; //a에 boonja 값을 넣어줌

	while (check != 0) //check가 0이 아닐 때 까지 반복
	{
		for (i = 2; i <= a; i++) //for문을 사용하여 2부터 a까지
		{
			if (boonja % i == 0 && boonmo % i == 0) //분자와 분모를 i로 나눴을 때 나누어 떨어지면
			{
				boonja /= i; // boonja / i 값
				boonmo /= i; // boonmo / i 값
				check = 1; //check를 1로 바꿔줌
				break; // break문을 넣지 않으면 다음 for문을 진행함 그렇기 때문에 break문을 넣어줌
			}
			else //나누어 떨어지지 않는다면
			{
				check = 0; //check에 0값을 넣음
			}
		}
	}

	printf("%d %d", boonja, boonmo); //기약분수의 분자와 분모 값 출력

}