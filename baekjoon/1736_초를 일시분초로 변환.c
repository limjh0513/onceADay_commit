#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int put; //입력
	int day, hour, min, sec; //일,시,분,초 변수

	scanf("%d", &put);

	day = put / 86400; //1일 -> 86400초
	put = put % 86400; //put을 86400으로 나눈 나머지 값을 넣어줌
	hour = put / 3600; // 1시간 -> 3600초
	put = put % 3600; //put을 3600으로 나눈 나머지 값을 넣어줌
	min = put / 60; // 1분 -> 60초
	put = put % 60; //put을 60으로 나눈 나머지 값을 넣어줌 
	sec = put; //put이 남은 초의 값이므로 sec에 put값을 넣어줌

	printf("%d %d %d %d", day, hour, min, sec); //출력

	return 0;
}