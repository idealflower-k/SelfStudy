#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n1, n2, temp;
    printf("구구단출력 정수 두 개입력: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for (; n1 <= n2; n1++)
    {
        for(int i = 1; i < 10; i++)
        {
            printf("%d x %d = %d\n", n1, i, n1*i);
        }
    }
    return (0);
}