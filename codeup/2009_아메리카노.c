#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int coupon; //쿠폰의 갯수
	int require; //가게에서 요구하는 쿠폰의 갯수
	int coffe = 0; //마실 수 있는 커피의 수

	scanf("%d %d", &coupon, &require);

	while (coupon >= require)
	{
		coupon -= require; //카페에서 요구하는 쿠폰의 갯수만큼 쿠폰갯수에서 빼줌
		coupon++; //쿠폰으로 바꿀 때도 쿠폰 1장을 더 주기 때문에 1개 추가
		coffe++; //커피 1잔 추가
	}
	printf("%d", coffe);

	return 0;
}
