#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int n;
	int put;
	int i;
	int sum = 0;

	scanf("%d", &n); //���� ���� �Է�

	for (i = 0; i < n; i++) //n������ �ݺ�
	{
		scanf("%d", &put); //�� �Է�
		sum += put; //sum�� �Է��� put�� ����
	}
	printf("%d", sum);
	return 0;
}