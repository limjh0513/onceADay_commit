#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int len; //�볪�� ����
	int cnt = 0; //���� �� �ִ� ��� ��
	int i;

	scanf("%d", &len);
	for (i = 1; i < len; i++)
	{
		if (len % i == 0)
		{
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}