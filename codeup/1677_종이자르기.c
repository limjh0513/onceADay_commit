#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int arr[50][50];
	int width, height;
	int i, j;

	scanf("%d %d", &width, &height);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			if (i == 0 && j == 0)
			{
				arr[i][j] = '+';
			}
			else if (i == 0 && j == width - 1)
			{
				arr[i][j] = '+';
			}
			else if (i == height - 1 && j == 0)
			{
				arr[i][j] = '+';
			}
			else if (i == height - 1 && j == width - 1)
			{
				arr[i][j] = '+';
			}
			else if (i == 0 || i == height - 1)
			{
				arr[i][j] = '-';
			}
			else if (j == 0 || j == width - 1)
			{
				arr[i][j] = '|';
			}
			else
			{
				arr[i][j] = ' ';
			}
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}