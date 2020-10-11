#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int age; //나이
	int year; // 태어난 년도
	int idYear; //연도 정보

	scanf("%d", &age); //나이 입력

	year = (2012 - age + 1); //문제의 기준이 2012이므로 2012-age를 해주고 +1을 해줌
	idYear = year % 100; // year에 % 100을 해주면 연도의 뒷자리 2자리만 나옴

	printf("%d ", idYear); //연도 정보를 출력해주고
	if (year >= 2000) //태어난 년도가 2000 이상이면
	{
		printf("3"); //3을 출력하고
	}
	else //그렇지 않다면 (2000 이하)
	{
		printf("1"); //1을 출력함
	}


	return 0;
}