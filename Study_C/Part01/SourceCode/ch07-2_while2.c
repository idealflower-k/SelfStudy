#include <stdio.h>

// 01
// int main(void)
// {
//     int count = 0, num = 1, result = 0;

//     while (count < 5)
//     {
//         printf("정수 입력: ");
//         scanf("%d", &num);
//         while (num < 1)
//         {
//             printf("정수 입력(1 이상): ");
//             scanf("%d", &num);
//         }
//         result += num;
//         count++;
//     }
//     printf("%d", result);

//     return (0);
// }

// 02
int main(void)
{
    int count = 0, print_o = 0;

    while (count < 5)
    {
        print_o = 0;
        while (print_o < count)
        {
            printf("o");
            print_o++;
        }
        printf("*\n");
        count++;
    }
    return (0);
}