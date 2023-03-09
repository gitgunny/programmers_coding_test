#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long SumForNumToNum(int a, int b)
{
    long long sum = 0;

    for (int i = a; i != b; a > b ? i-- : i++)
        sum += i;
    sum += b;

    return sum;
}

long long solution(int a, int b)
{
    return SumForNumToNum(a, b);
}

int main()
{
    printf("%d", solution(3, 5));

    return 0;
}

/*
a	b	return
3	5	12
3	3	3
5	3	12
*/