#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// int GCD(int, int);

// int main(void)
// {
//     int n1, n2;
//     printf("두 개의 정수입력: ");
//     scanf("%d %d", &n1, &
//     n2);
//     printf("%d, %d의 최대 공약수는 %d이다.\n", n1, n2, GCD(n1, n2));
// }

// int GCD(int n1, int n2)
// {
//     int gcd = 1;
//     gcd = n1 < n2 ? n1 : n2;
//     for (;; gcd--)
//     {
//         if (n1 % gcd == 0 && n2 % gcd == 0)
//         {
//             return gcd;
//         }
//     }
// }

// 유클리드 호제법
int GCD (int n1, int n2)
{
    int gcd = 1, r = 0;
    r = n1 < n2 ? n2 % n1 : n1 % n2;
    if (n1 < n2)
    {
        gcd = n1;
        for (; ; gcd--)
        {
            if (r % gcd == 0 && n1 % gcd == 0)
            {
                return gcd;
            }
        }
    }
    else
    {
        gcd = n2;
        for (; ; gcd--)
        {
            if (r % gcd == 0 && n2 % gcd == 0)
            {
                return gcd;
            }
        }
    }
    
}
int main(void)
{
    int n1, n2;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &n1, &n2);
    printf("%d, %d의 최대 공약수는 %d이다.\n", n1, n2, GCD(n1, n2));

    return (0);
}