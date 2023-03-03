#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 리턴할 값은 메모리를 동적 할당해주세요.
static int *first_digit_array;

int GetFirstDigitCount(long long n)
{
    int count = 0;

    while (n)
    {
        count++;
        n /= 10;
    }

    return count;
}

int *GetFirstDigit(long long n)
{
    first_digit_array = (int *)malloc(GetFirstDigitCount(n) * sizeof(int));
    int count = 0;

    while (n)
    {
        first_digit_array[count++] = n % 10;
        n /= 10;
    }

    return first_digit_array;
}

int *solution(long long n)
{
    return GetFirstDigit(n);
}

int main()
{
    solution(457625);
    free(first_digit_array);

    return 0;
}

/*
n	return
12345	[5,4,3,2,1]
*/