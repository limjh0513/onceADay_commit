#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr[1000] = { 0, };// �Է¹��� ��
	int n; //�Է� ���� ���� ����
	int i; //for�� ���
	int sum = 0;
	
	scanf("%d", &n);// �Է� ���� ���� ���� �Է�
	for (i = 0; i < n; i++) 
	{
		scanf("%d", &arr[i]); //�� n�� �Է�
	}

	for (i = 0; i < n; i++) //�迭�̹Ƿ� 0���� �ؼ� �� n��
	{
		if (arr[i] % 5 == 0) //5�� ����̹Ƿ� 5�� ������ �� 0�ΰ�
		{
			sum += arr[i]; //sum�̶�� ������ arr[i]�� ������
		}
	}
	printf("%d", sum);

	return 0;
}