#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int GetRightEvenNum(int num)
{
    if (num %2 == 0)
        return 1;

    return 0;
}

char *solution(int num)
{
    if (GetRightEvenNum(num))
        return "Even";
    else
        return "Odd";
}

int main()
{
    printf("%s", solution(3));

    return 0;
}

/*
num	return
3	"Odd"
4	"Even"
*/