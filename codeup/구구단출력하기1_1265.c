#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int num;
	int i;

	scanf("%d", &num); //원하는 수 입력

	for (i = 1; i < 10; i++) //구구단이므로 1~9까지
	{
		printf("%d*%d=%d", num, i, num * i);
	}

	return 0;
}