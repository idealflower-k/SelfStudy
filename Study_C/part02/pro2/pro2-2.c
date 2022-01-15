#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// void Trans_num2(int num10)
// {
//     int num = 1;
//     int count = 0;
//     int num2 = 0;
//     while (1)
//     {
//         if (num10 > num && num10 < (num*2) || num10 >= num && num10 < (num*2) || num10 > num && num10 <= (num*2))
//         {
//             for (; count >= 0; count--)
//             {   
//                 if (num10 == num || num10 == (num*2))
//                 {
//                     num2 = num10 / num;
//                     num2 /= 2;
//                 }
//                 else
//                 {
//                 num2 = num10 / num;
//                 }
//                 printf("%d ", num2);
//                 num10 %= num;
//                 num /= 2;
//                 if (count == 0)
//                 {
//                     return;
//                 }
//             }
//         }
//         else
//         {
//             count += 1;
//             num *= 2;
//         }
//     }
// }

// int main(void)
// {
//     int num10;
//     printf("10진수 정수 입력: ");
//     scanf("%d", &num10);

//     Trans_num2(num10);

//     return (0);
// }

// answer
int main(void)
{
	int num, cnt = 0;
    int num2[30];

    printf("10진수 정수 입력: ");
    scanf("%d", &num);

    while (num > 0)
    {
        num2[cnt++] = num % 2;
        num /= 2;
    }
    while (cnt > 0)
    {
        printf("%d", num2[--cnt]);
    }

    return (0);
}