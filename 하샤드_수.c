#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int SumDigit(int num)
{
    int sum = 0;

    while (num)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

bool CheckHashadNum(int num)
{
    if (num % SumDigit(num) == 0)
        return true;

    return false;
}

bool solution(int x)
{
    return CheckHashadNum(x);
}

int main()
{
    printf("%d", solution(10));

    return 0;
}

/*
arr	return
10	true
12	true
11	false
13	false
*/