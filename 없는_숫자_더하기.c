#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len)
{
    int answer = 45;

    for (int i = 0; i < numbers_len; i++)
        answer -= numbers[i];

    return answer;
}

int main()
{
    int numbers[] = {1,2,3,4,6,7,8,0};

    printf("%d", solution(numbers, sizeof(numbers) / sizeof(numbers[0])));

    return 0;
}

/*
numbers	result
[1,2,3,4,6,7,8,0]	14
[5,8,4,0,6,7,9]	6
*/