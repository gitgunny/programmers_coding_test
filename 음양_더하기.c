#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len)
{
    int answer = 0;

    for (int i = 0; i < absolutes_len; i++)
        signs[i] ? (answer += absolutes[i]) : (answer -= absolutes[i]);

    return answer;
}

int main()
{
    int absolutes[] = {4, 7, 12};
    bool signs[] = {true, false, true};

    printf("%d", solution(absolutes, 3, signs, 3));

    return 0;
}

/*
absolutes	signs	result
[4,7,12]	[true,false,true]	9
[1,2,3]	[false,false,true]	0
*/