#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int len; //대나무 길이
	int cnt = 0; //만들 수 있는 대금 수
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