#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int GetRestResultOneNum(int num)
{
    int x = 1;

    while (x++)
        if (num % x == 1)
            break;

    return x;
}

int solution(int n)
{
    return GetRestResultOneNum(n);
}

int main()
{
    printf("%d", solution(10));

    return 0;
}

/*
n	result
10	3
12	11
*/