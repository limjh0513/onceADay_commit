#include <stdio.h>
#pragma warning(disable : 4996)

int bignum(int arr[])
{
	int big = arr[0];
	int i;

	for (i = 1; i < 5; i++)
	{
		if (big < arr[i])
			big = arr[i];
		}
	}
	return big;
}

int smallnum(int arr[])
{
	int small = arr[0];
	int i;

	for (i = 1; i < 5; i++)
	{
		if (small > arr[i])
		{
			small = arr[i];
		}
	}
	return small;
}

int main(void)
{
	int arr[5]; //5�� ���� �Է�
	int i;
	int big, small; //�ִ�, �ּڰ�

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	big = bignum(arr);
	small = smallnum(arr);

	printf("%d\n%d", big, small);

	return 0;
}