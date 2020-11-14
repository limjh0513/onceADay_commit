#include <stdio.h>
#pragma warning(disable : 4996)

int positionNum(int number)
{
	int result = 0;
	while (number != 0)
	{
	    result += number % 10;
		number /= 10;
	}
	return result;
}

int main(void)
{
	int number;
	int sum = 0;
	
	scanf("%d", &number);

	sum = positionNum(number);
	
	if (sum % 7 == 4)
	{
		printf("Bad");
	}
	else
	{
		printf("Good");
	}

	return 0;
}