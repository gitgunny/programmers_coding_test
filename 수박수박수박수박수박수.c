#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char *solution(int n)
{
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    char *answer = (char *)calloc((n * 3) + 1, sizeof(char));

    for (int i = 0; i < n / 2; i++)
        strcat(answer, "����");

    if (n % 2 != 0)
        strcat(answer, "��");

    return answer;
}

int main()
{
    printf("%s", solution(3));

    return 0;
}

/*
n	return
3	"���ڼ�"
4	"���ڼ���"
*/