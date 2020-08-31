#include <stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	int lotto[7]; //이번주 로또 번호 +보너스번호
	int buy_lotto[6]; //산 로또의 번호
	int lotto_check = 0; //맞춘 로또 번호의 갯수 
	int bonus_check = 0; //보너스 번호 유무
	int i;
	int j;
	
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &lotto[i]);
	}
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &buy_lotto[i]);
	}

	for (i = 0; i < 7; i++) 
	{
		for (j = 0; j < 6; j++)
		{
			if (i == 6) //buy_lotto의 마지막 번호는 보너스 번호이므로 다른 수들과는 다르게 해줌
			{
				if (lotto[i] == buy_lotto[j]) //보너스 번호가 산 로또의 번호 중에 있으면 
				{
					bonus_check = 1; //bonus_check를 1로 만들어줌 
					//여기서 lotto_check++을 해주면 맞춘 번호의 수도 한개가 늘어나기 때문에 빼줌
				}
			}
			else
			{
				if (lotto[i] == buy_lotto[j]) //이번주 로또 번호 중 한개가 산 로또의 번호 중에 있으면
				{
					lotto_check++; //lotto_check를 ++ 해줌
				}
			}
		}
	}
	if (lotto_check == 6) //로또 번호 6개 맞으면 1등
	{
		printf("1");
	}
	else if (lotto_check == 5 && bonus_check == 1) //로또 번호 5개 맞고 보너스 번호 1개 맞으면 2등
	{
		printf("2");
	}
	else if (lotto_check == 5 && bonus_check == 0) //로또 번호 5개 맞으면 3등
	{
		printf("3");
	}
	else if (lotto_check == 4) //로또 번호 4개 맞으면 4등
	{
		printf("4");
	}
	else if (lotto_check == 3) //로또 번호 3개 맞으면 5등
	{
		printf("5");
	}
	else
	{
		printf("0");
	}
	return 0;
}