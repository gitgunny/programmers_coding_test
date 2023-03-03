#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int GetFirstDigit(int num)
{
    return num % 10;
}

int solution(int n) {
    int answer = 0;

    while (n)
    {
        answer += GetFirstDigit(n);
        n /= 10;
    }

    return answer;
}

int main()
{
    printf("%d", solution(123));

    return 0;
}

/*
N	answer
123	6
987	24
*/