#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int board[19][19] = { 0, }; //바둑판 19*19
	int whiteStone = 0; //흰 돌의 갯수
	int i, j; //for문 사용
	int x, y; //흰 돌의 위치

	scanf("%d", &whiteStone); // 흰 돌의 갯수를 입력받음

	for (i = 1; i <= whiteStone; i++) //흰 돌의 갯수 만큼 입력
	{
		scanf("%d %d", &x, &y); //흰 돌의 위치를 입력받음
		board[x-1][y-1] = 1; //위치에 흰 돌(1)을 놓음 x,y가 1~19인데 배열은 0부터 시작하므로 -1해줌
	}

	for (i = 0; i < 19; i++)
	{
		for (j = 0; j < 19; j++)
		{
			printf("%d ", board[i][j]); //출력
		}
		printf("\n"); //줄바꿈
	}

	return 0;
}