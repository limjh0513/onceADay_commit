#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int put; //�� �Է�
	int cnt = 0; //����
	int i; //for�� ���

	scanf("%d", &put);

	for (i = 1; i <= put; i++) //1���� �Է��� �� ���� �ݺ�
	{
		if (i % 10 == 1) //i�� 10���� ������ �� �������� 1�̶�� 1�� �ڸ����� 1�� ���̹Ƿ�
		{
			cnt++; //���� 1�� �߰�
		}
	}
	printf("%d", cnt); //���
	return 0;
}