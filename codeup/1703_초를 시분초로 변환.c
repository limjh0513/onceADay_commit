#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int put_second; //초 입력
	int hour = 0; //시
	int min = 0; //분
	int sec = 0; //초

	scanf("%d", &put_second);

	while (put_second >= 3600) //1시간당 3600초이므로 put_second가 3600 이상일 때
	{
		hour++; //1시간 추가
		put_second -= 3600; //3600초 빼주기
	}
	while (put_second >= 60) //1분당 60초이므로 put_second가 60 이상일 때
	{
		min++;
		put_second -= 60;
	}
	sec = put_second; //남은 시간은 초 단위이므로 put_second를 sec에 넣어줌

	printf("%d %d %d", hour, min, sec);

	return 0;
}
