#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long GetnSquare(long long n)
{
    long long square = 1;

    while (n >= square * square)
    {
        if (n == square * square)
            return (square + 1) * (square + 1);

        square++;
    }

    return -1;
}

long long solution(long long n)
{
    return GetnSquare(n);
}

int main()
{
    printf("%ld", solution(121));

    return 0;
}

/*
n	return
121	144
3	-1
*/