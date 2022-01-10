#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 01
// int SquarebyValue(int num)
// {
//     return num * num;
// }
// void SquareByReference(int * param)
// {
//     * param *= * param;
// }

// int main(void)
// {
//     int num = 10;

//     printf("num: %d\n", SquarebyValue(num));

//     SquareByReference(&num);
//     printf("num: %d\n", num);

//     return (0);
// }

// 02
void Swap3(int * ptr1, int * ptr2, int * ptr3)
{
    int temp = * ptr1;
    * ptr1 = * ptr3;
    * ptr3 = * ptr2;
    * ptr2 = temp;
}

int main(void)
{
    int num1 = 1, num2 = 2, num3 = 3;
    Swap3(&num1, &num2, &num3);
    printf("num1 num2 num3: %d %d %d\n", num1, num2, num3);

    return (0);
}
