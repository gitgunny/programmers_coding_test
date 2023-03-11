#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char *solution(const char *phone_number)
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int phone_len = strlen(phone_number);
    char *answer = (char *)malloc(sizeof(char) * phone_len);

    for (int i = 0; i < phone_len; i++)
    {
        if (i > phone_len - 4 - 1)
            answer[i] = phone_number[i];
        else
            answer[i] = '*';
    }
    answer[phone_len] = '\0';

    return answer;
}

int main()
{
    printf("%s", solution("01033334444"));

    return 0;
}

/*
phone_number	return
"01033334444"	"*******4444"
"027778888"	"*****8888"
*/