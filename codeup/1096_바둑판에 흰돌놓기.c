#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int board[19][19] = { 0, }; //�ٵ��� 19*19
	int whiteStone = 0; //�� ���� ����
	int i, j; //for�� ���
	int x, y; //�� ���� ��ġ

	scanf("%d", &whiteStone); // �� ���� ������ �Է¹���

	for (i = 1; i <= whiteStone; i++) //�� ���� ���� ��ŭ �Է�
	{
		scanf("%d %d", &x, &y); //�� ���� ��ġ�� �Է¹���
		board[x-1][y-1] = 1; //��ġ�� �� ��(1)�� ���� x,y�� 1~19�ε� �迭�� 0���� �����ϹǷ� -1����
	}

	for (i = 0; i < 19; i++)
	{
		for (j = 0; j < 19; j++)
		{
			printf("%d ", board[i][j]); //���
		}
		printf("\n"); //�ٹٲ�
	}

	return 0;
}