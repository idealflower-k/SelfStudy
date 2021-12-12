#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 01
// int main(void)
// {
//     int num1, num2, total = 0;

//     printf("두 개의 정수 입력: ");
//     scanf("%d %d", &num1, &num2);

//     for (total = 0; num1 <= num2; num1++)
//     {
//         total += num1;
        
//     }
//     printf("합계: %d", total);

//     return (0);
// }

// 02
int main(void)
{
    int num, total = 1;

    printf("정수 입력: ");
    scanf("%d", &num);

    for (int i = 1 ; i <= num; i++)
    {
        total *= i;
    }

    printf("%d! : %d\n", num, total);
    return (0);
}