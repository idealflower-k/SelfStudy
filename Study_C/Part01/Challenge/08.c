#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Square(int n);

int main(void)
{
    int n, i = 1;
    printf("정수 입력: ");
    scanf("%d", &n);
    printf("%d\n", Square(n));
    return (0);
}

int Square(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return 2 * Square(n-1);
    }
}