#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void even_numbers(int * num, int len)
{
    printf("짝수 출력: ");
    for (int i = 0; i < len; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("%d ", num[i]);
        }
    }
    return;
}

void odd_numbers(int * num, int len)
{
    printf("\n홀수 출력: ");
    for (int i = 0; i < len; i++)
    {
        if (num[i] % 2 != 0)
        {
            printf("%d ", num[i]);
        }
    }
    return;
}

int main(void)
{
    int num[10];
    int * p_num = num;
    int num_len = sizeof(num) / sizeof(int);

    for (int i = 0; i < num_len; i++)
    {
        printf("정수입력: ");
        scanf("%d", &num[i]);
    }

    even_numbers(p_num, num_len);
    odd_numbers(p_num, num_len);

    return (0);
}