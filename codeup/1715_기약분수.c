#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int boonja; //����
	int boonmo; //�и�
	int a; //���м��� ���� �� ���
	int i;
	int check = 1; // 0�� �ƴ� �� �ݺ��̶�� ������ ���� ���̱� ������ 1�� �ʱ�ȭ

	scanf("%d %d", &boonja, &boonmo); //���ڿ� �и� �Է�
	a = boonja; //a�� boonja ���� �־���

	while (check != 0) //check�� 0�� �ƴ� �� ���� �ݺ�
	{
		for (i = 2; i <= a; i++) //for���� ����Ͽ� 2���� a����
		{
			if (boonja % i == 0 && boonmo % i == 0) //���ڿ� �и� i�� ������ �� ������ ��������
			{
				boonja /= i; // boonja / i ��
				boonmo /= i; // boonmo / i ��
				check = 1; //check�� 1�� �ٲ���
				break; // break���� ���� ������ ���� for���� ������ �׷��� ������ break���� �־���
			}
			else //������ �������� �ʴ´ٸ�
			{
				check = 0; //check�� 0���� ����
			}
		}
	}

	printf("%d %d", boonja, boonmo); //���м��� ���ڿ� �и� �� ���

}