#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr[3]; //3개의 수 입력
	int c = 0;//2번째인지 확인
	int i; //for문
	int second_small = 0; //두번째로 작은 수

	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}

	if (arr[0] <= arr[1] && arr[0] >= arr[2]) //첫번째로 입력한 숫자가 두번째로 작은 수일때
	{
		second_small = arr[0];
	}
	else if (arr[0] >= arr[1] && arr[0] <= arr[2]) //첫번째로 입력한 숫자가 두번째로 작은 수일때
	{
		second_small = arr[0];
	}
	else //아닐때는
	{
		if (arr[1] >= arr[0] && arr[1] <= arr[2]) //두번째 입력한 숫자가 두번째로 작은 수일때
		{
			second_small = arr[1];
		}
		else if (arr[1] <= arr[0] && arr[1] >= arr[2]) //두번째 입력한 숫자가 두번째로 작은 수일때
		{
			second_small = arr[1];
		}
		else //위에 조건이 모두 만족하지 않았을 때에는 세번쨰 입력한 숫자가 두번째로 작은수 이므로
		{
			second_small = arr[2];
		}
	}

	printf("%d", second_small); //두번째 작은수를 출력해준다.
	return 0;
}