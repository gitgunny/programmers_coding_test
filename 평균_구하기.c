#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

double GetAverage(int array[], size_t array_len)
{
    double sum = 0;

    for (int i = 0; i < array_len; i++)
        sum += array[i];

    return sum / array_len;
}

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len)
{
    return GetAverage(arr, arr_len);
}

int main()
{
    int array[] = {1, 2, 3, 4};

    printf("%lf", solution(array, sizeof(array) / sizeof(array[0])));

    return 0;
}

/*
arr	return
[1,2,3,4]	2.5
[5,5]	5
*/