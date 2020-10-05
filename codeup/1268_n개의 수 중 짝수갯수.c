#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
	int* ar; //동적할당 -> 배열
	int n; // n개 입력
	int i;
	int cnt = 0; // 짝수 갯수

	scanf("%d", &n); //입력

	ar = (int*)malloc(n * sizeof(int));

	for(i = 0; i < n; i++)
	{
		scanf("%d", &ar[i]); //수 입력
	}

	for (i = 0; i < n; i++)
	{
		if (ar[i] % 2 == 0) //2로 나눴을 때 나머지가 0이면 짝수
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	free(ar);

	return 0;
}