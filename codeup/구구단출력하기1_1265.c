#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int num;
	int i;

	scanf("%d", &num); //���ϴ� �� �Է�

	for (i = 1; i < 10; i++) //�������̹Ƿ� 1~9����
	{
		printf("%d*%d=%d", num, i, num * i);
	}

	return 0;
}