#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int user_num, i, k = 1;
    printf("정수 입력: ");
    scanf("%d", &user_num);

    for (i = 0; k < user_num; i++)
    {
            k *= 2;
    }
    printf("%d", i);

    return (0);
}