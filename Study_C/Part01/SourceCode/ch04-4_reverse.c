#include <stdio.h>

// 01
// int main(void)
// {
//     int num, reverse_num;

//     printf("정수 입력: ");
//     scanf("%d", &num);

//     reverse_num = ~num + 1;

//     printf("부호반전 : %d", reverse_num);

//     return (0);
// }

// 02
int main(void)
{
    int num;
    
    num = (3 << 3) >> 2;
    printf("3 X 8 / 4 = %d", num);

    return (0);
}