#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int coupon; //������ ����
	int require; //���Կ��� �䱸�ϴ� ������ ����
	int coffe = 0; //���� �� �ִ� Ŀ���� ��

	scanf("%d %d", &coupon, &require);

	while (coupon >= require)
	{
		coupon -= require; //ī�信�� �䱸�ϴ� ������ ������ŭ ������������ ����
		coupon++; //�������� �ٲ� ���� ���� 1���� �� �ֱ� ������ 1�� �߰�
		coffe++; //Ŀ�� 1�� �߰�
	}
	printf("%d", coffe);

	return 0;
}