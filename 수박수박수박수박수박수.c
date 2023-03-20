#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char *solution(int n)
{
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char *answer = (char *)calloc((n * 3) + 1, sizeof(char));

    for (int i = 0; i < n / 2; i++)
        strcat(answer, "수박");

    if (n % 2 != 0)
        strcat(answer, "수");

    return answer;
}

int main()
{
    printf("%s", solution(3));

    return 0;
}

/*
n	return
3	"수박수"
4	"수박수박"
*/