#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int put_second; //�� �Է�
	int hour = 0; //��
	int min = 0; //��
	int sec = 0; //��

	scanf("%d", &put_second);

	while (put_second >= 3600) //1�ð��� 3600���̹Ƿ� put_second�� 3600 �̻��� ��
	{
		hour++; //1�ð� �߰�
		put_second -= 3600; //3600�� ���ֱ�
	}
	while (put_second >= 60) //1�д� 60���̹Ƿ� put_second�� 60 �̻��� ��
	{
		min++;
		put_second -= 60;
	}
	sec = put_second; //���� �ð��� �� �����̹Ƿ� put_second�� sec�� �־���

	printf("%d %d %d", hour, min, sec);

	return 0;
}