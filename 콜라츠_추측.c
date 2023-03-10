#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long ResultCollatz(long long num)
{
    if (num % 2 == 0)
        num /= 2;
    else
        num = (num * 3) + 1;

    return num;
}

int solution(long long num)
{
    int count = 0;

    while (1)
    {
        if (num == 1)
            break;
        if (count == 500)
            return -1;

        num = ResultCollatz(num);
        count++;
    }

    return count;
}

int main()
{
    printf("%d", solution(626331));

    return 0;
}

/*
1-1. 입력된 수가 짝수라면 2로 나눕니다.
1-2. 입력된 수가 홀수라면 3을 곱하고 1을 더합니다.
2. 결과로 나온 수에 같은 작업을 1이 될 때까지 반복합니다.

n	result
6	8
16	4
626331	-1
*/