#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr[1000] = { 0, };// 입력받을 수
	int n; //입력 받을 수의 갯수
	int i; //for문 사용
	int sum = 0;
	
	scanf("%d", &n);// 입력 받을 수의 갯수 입력
	for (i = 0; i < n; i++) 
	{
		scanf("%d", &arr[i]); //수 n번 입력
	}

	for (i = 0; i < n; i++) //배열이므로 0부터 해서 총 n번
	{
		if (arr[i] % 5 == 0) //5의 배수이므로 5로 나눴을 때 0인것
		{
			sum += arr[i]; //sum이라는 변수에 arr[i]를 더해줌
		}
	}
	printf("%d", sum);

	return 0;
}