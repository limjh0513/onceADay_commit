#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr[10];
	int i;
	int c = 1; //5�� ����� ����� �ȵǾ��� �� ���

	for (i = 0; i < 10; i++) //���� 10���� �Է¹���
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++) //10�� �ݺ�
	{
		if (arr[i] % 5 == 0) //arr[i]�� 5�� ������
		{
			c = 0; //c�� 0���� �ٲ���
			printf("%d", arr[i]); //���
			break; //�� �̻� ������� �ʾƵ� �ǹǷ� break
		}
	}
	if (c == 1) //c�� 1�϶�, �� 5�� ����� ��µ��� �ʾ��� ��
	{
		printf("0"); //0�� �������
	}
	return 0;
}