#include <stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	int lotto[7]; //�̹��� �ζ� ��ȣ +���ʽ���ȣ
	int buy_lotto[6]; //�� �ζ��� ��ȣ
	int lotto_check = 0; //���� �ζ� ��ȣ�� ���� 
	int bonus_check = 0; //���ʽ� ��ȣ ����
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
			if (i == 6) //buy_lotto�� ������ ��ȣ�� ���ʽ� ��ȣ�̹Ƿ� �ٸ� ������� �ٸ��� ����
			{
				if (lotto[i] == buy_lotto[j]) //���ʽ� ��ȣ�� �� �ζ��� ��ȣ �߿� ������ 
				{
					bonus_check = 1; //bonus_check�� 1�� ������� 
					//���⼭ lotto_check++�� ���ָ� ���� ��ȣ�� ���� �Ѱ��� �þ�� ������ ����
				}
			}
			else
			{
				if (lotto[i] == buy_lotto[j]) //�̹��� �ζ� ��ȣ �� �Ѱ��� �� �ζ��� ��ȣ �߿� ������
				{
					lotto_check++; //lotto_check�� ++ ����
				}
			}
		}
	}
	if (lotto_check == 6) //�ζ� ��ȣ 6�� ������ 1��
	{
		printf("1");
	}
	else if (lotto_check == 5 && bonus_check == 1) //�ζ� ��ȣ 5�� �°� ���ʽ� ��ȣ 1�� ������ 2��
	{
		printf("2");
	}
	else if (lotto_check == 5 && bonus_check == 0) //�ζ� ��ȣ 5�� ������ 3��
	{
		printf("3");
	}
	else if (lotto_check == 4) //�ζ� ��ȣ 4�� ������ 4��
	{
		printf("4");
	}
	else if (lotto_check == 3) //�ζ� ��ȣ 3�� ������ 5��
	{
		printf("5");
	}
	else
	{
		printf("0");
	}
	return 0;
}