#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int put; //�Է�
	int day, hour, min, sec; //��,��,��,�� ����

	scanf("%d", &put);

	day = put / 86400; //1�� -> 86400��
	put = put % 86400; //put�� 86400���� ���� ������ ���� �־���
	hour = put / 3600; // 1�ð� -> 3600��
	put = put % 3600; //put�� 3600���� ���� ������ ���� �־���
	min = put / 60; // 1�� -> 60��
	put = put % 60; //put�� 60���� ���� ������ ���� �־��� 
	sec = put; //put�� ���� ���� ���̹Ƿ� sec�� put���� �־���

	printf("%d %d %d %d", day, hour, min, sec); //���

	return 0;
}