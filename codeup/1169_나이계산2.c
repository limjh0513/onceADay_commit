#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int age; //����
	int year; // �¾ �⵵
	int idYear; //���� ����

	scanf("%d", &age); //���� �Է�

	year = (2012 - age + 1); //������ ������ 2012�̹Ƿ� 2012-age�� ���ְ� +1�� ����
	idYear = year % 100; // year�� % 100�� ���ָ� ������ ���ڸ� 2�ڸ��� ����

	printf("%d ", idYear); //���� ������ ������ְ�
	if (year >= 2000) //�¾ �⵵�� 2000 �̻��̸�
	{
		printf("3"); //3�� ����ϰ�
	}
	else //�׷��� �ʴٸ� (2000 ����)
	{
		printf("1"); //1�� �����
	}


	return 0;
}