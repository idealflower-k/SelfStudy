#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 01
// int main(void)
// {
//     int num = 10;
//     int * ptr1 = &num;
//     int * ptr2 = ptr1;

//     (* ptr1)++;
//     (* ptr2)++;
//     printf("%d \n", num);

//     return (0);
// }

// 02
int main(void)
{
    int num1 = 10, num2 = 20;
    int * ptr1 = &num1, * ptr2 = &num2, * temp;

    (* ptr1) += 10;
    (* ptr2) -= 10;

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("ptr1: %d, ptr2: %d", (*ptr1), (*ptr2));

    return (0);
}