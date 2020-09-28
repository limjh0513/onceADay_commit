#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr[1000];
	int n; //°¹¼ö ÀÔ·Â
	int i; //for¹®
	int big_num = 0; //ÃÖ´ë°ª
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
