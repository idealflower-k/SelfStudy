#include <stdio.h>

// 01
// int main(void)
// {
//     int total = 0, num = 1;

//     while (num != 0)
//     {
//         printf("정수 입력 (0 종료): ");
//         scanf("%d", &num);
//         total += num;
//     }
//     printf("합계: %d\n", total);

//     return (0);
// }

// 02
// int main(void)
// {
//     int num = 0, total = 0;
//     do
//     {
//         total += num;
//         num += 2;
//     } while (num <= 100);
//     printf("짝수의 합: %d", total);

//     return (0);
// }

// 03
int main(void)
{
    int i = 2, j = 1;

    do
    {
        j = 1;
        do
        {
            printf("%d x %d = %d\n", i, j, i*j);
            j++;
        } while (j < 10);
        i++;
    } while (i < 10);
    return (0);
}