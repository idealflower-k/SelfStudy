#include <stdio.h>

// 01
// int main(void)
// {
//     int num;
//     printf("양의 정수 입력: ");
//     scanf("%d", &num);

//     while (num > 0)
//     {
//         printf("Hello world!\n");
//         num--;
//     }
//     return (0);
// }

// 02
// int main(void)
// {
//     int num;
//     int count = 0;

//     printf("양의 정수 입력: ");
//     scanf("%d", &num);

//     while (count++ < num)
//     {
//         printf("%d ", 3 * couunt);
//     }
//     return (0);
// }

// 03
// int main(void)
// {
//     int num = 1, result = 0;


//     while (num != 0)
//     {
//         printf("정수 입력(0 종료): ");
//         scanf("%d", &num);
//         result += num;
//     }
//     printf("%d\n", result);

//     return (0);
// }

// 04
// int main(void)
// {
//     int num, i = 9;

//     printf("단 입력: ");
//     scanf("%d", &num);

//     while (i > 0)
//     {
//         printf("%d x %d = %d\n", num, i, i*num);
//         i--;
//     }
//     return (0);
// }

// 05
int main(void)
{
    int count, temp, num, result = 0;
    double average;
    
    printf("정수의 개수 입력: ");
    scanf("%d", &count);
    temp = count;

    while (count > 0)
    {
        printf("정수 입력: ");
        scanf("%d", &num);
        result += num;
        count--;
    }
    average = (double) result / temp;
    printf("평균 값: %.2f\n", average);

    return (0);
}