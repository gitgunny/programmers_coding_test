#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int StringToNumber(const char *string)
{
    int number = 0, string_len = 0, flag = 1;

    for (int i = 0; string[i] != '\0'; i++)
        string_len++;

    if (string[0] >= '1' && string[0] <= '9')
        flag = 0;

    for (int i = flag; i < string_len; i++)
        number = (number * 10) + (string[i] - 48);

    if (flag && string[0] != '+')
        number *= -1;

    return number;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char *s)
{
    return StringToNumber(s);
}

int main()
{
    printf("%d", solution("1234"));

    return 0;
}

/*
예를들어 str이 "1234"이면 1234를 반환하고, "-1234"이면 -1234를 반환하면 됩니다.
str은 부호(+,-)와 숫자로만 구성되어 있고, 잘못된 값이 입력되는 경우는 없습니다.
*/