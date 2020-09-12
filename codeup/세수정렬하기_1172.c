#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr[3] = { 0, }; // 세 수 입력
	int i, j; //for문 사용
	int small; //정렬 시 사용

	for (i = 0; i < 3; i++) //입력
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 2; i++) //만약 7 6 2라고 입력하면 1번만 했을 때 6 2 7로 출력됨 그렇기 때문에 N-1회 즉 2회 실행
	{
		for (j = 0; j < 2; j++) //만약 3번째까지 실행하면 밑의 IF문에서 3+1까지 실행하므로 쓰레기값이 나올 수 있음 
		{
			if (arr[j] > arr[j + 1]) //N번째 보다 N+1번째 수가 작을때 실행
			{
				small = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = small;
			}
		}
	}

	printf("%d %d %d", arr[0], arr[1], arr[2]); //출력

	return 0;
}