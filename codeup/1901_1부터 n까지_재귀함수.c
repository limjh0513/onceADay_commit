#include <stdio.h>
#pragma warning(disable : 4996)

void numberprint(int num)
{
	static int i = 1; //static ���� �ϳ��� ����� ����Լ��� ȣ���� �� ���� ���� ���� ����
	if (i == num) //i�� num�� ������
	{ 
		printf("%d\n", i); //��¸� ����
	}
	else
	{
		printf("%d\n", i); //���
		i++; //static i�� ++ ����
		numberprint(num); //����Լ� ȣ��
	}
	return 0; //return 0�� ���־� �Լ� ����
}

int main(void)
{
	int n; //�� �Է�

	scanf("%d", &n); //�Է�

	numberprint(n); //�Լ� ȣ��

	return 0;
}