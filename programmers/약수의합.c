#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            answer += i;
        }
    }

    return answer;
}

int main(void)
{
    int num;
    int result;

    scanf("%d", &num);

    result = solution(num);
    
    printf("%d\n", result);
    return 0;
}