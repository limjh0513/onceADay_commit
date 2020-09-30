#include <stdio.h>
#pragma warning(disable : 4996)

void oddEvenCheck(int num)
{
	if (num > 0) // num이 0보다 클 때
	{
		printf("양수\n");
	} 
	else if (num == 0) //num이 0일 때
	{
		printf("0\n");
	}
	else
	{
		printf("음수\n"); //num이 0보다 작을 때
	}
}

int main(void)
{
	int num; //숫자 입력받을 변수

	scanf("%d", &num); //숫자 입력

	oddEvenCheck(num); //양수인지 음수인지 판별할 함수 호출

	return 0;
}