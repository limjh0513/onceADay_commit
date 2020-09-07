#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr[1000];
	int n; //갯수 입력
	int i; //for문
	int big_num = 0; //최대값
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