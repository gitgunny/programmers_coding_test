#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

static int *num_divisor;

int GetDivisorCount(int num)
{
    int divisor_count = 0;

    if (num <= 0)
        return 0;

    for (int i = 1; i <= num / 2; i++)
        if (num % i == 0)
            divisor_count++;

    return divisor_count + 1;
}

int *GetDivisor(int num)
{
    int divisor_count = 0;
    num_divisor = (int *)malloc(GetDivisorCount(num) * sizeof(int));

    if (num <= 0)
        return 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            num_divisor[divisor_count++] = i;
    }

    return num_divisor;
}

int solution(int n)
{
    int sum = 0;
    int *n_divisor = GetDivisor(n);

    for (int i = 0; i < GetDivisorCount(n); i++)
    {
        sum += n_divisor[i];
    }

    free(num_divisor);

    return sum;
}

int main()
{
    printf("%d", solution(12));

    return 0;
}

/*
n	return
12	28
5	6
*/