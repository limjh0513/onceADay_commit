#include <stdio.h>
#pragma warning(disable : 4996)

void oddEvenCheck(int num)
{
	if (num > 0) // num�� 0���� Ŭ ��
	{
		printf("���\n");
	} 
	else if (num == 0) //num�� 0�� ��
	{
		printf("0\n");
	}
	else
	{
		printf("����\n"); //num�� 0���� ���� ��
	}
}

int main(void)
{
	int num; //���� �Է¹��� ����

	scanf("%d", &num); //���� �Է�

	oddEvenCheck(num); //������� �������� �Ǻ��� �Լ� ȣ��

	return 0;
}