#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr[1000];
	int n; //���� �Է�
	int i; //for��
	int big_num = 0; //�ִ밪
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (big_num < arr[i])
		{
			big_num = arr[i];
		}
	}

	printf("%d", big_num);

	return 0;
}