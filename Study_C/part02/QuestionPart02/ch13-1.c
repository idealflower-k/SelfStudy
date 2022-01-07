#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 01
// int main(void)
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int * ptr = &arr[0];

//     for (int i = 0; i < 5; i++)
//     {
//         * (ptr) += 2;
//         ptr++;
//         printf("%d ", arr[i]);
//     }

//     return (0);
// }

// // 02
// int main(void)
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int * ptr = &arr[0];
//     int i;

//     for (i = 0; i < 5; i++)
//     {
//         (ptr + i) += 2;
//         printf("%d ", arr[i]);
//     }
//     return (0);
// }

// 03
// int main(void)
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int * ptr = &arr[4];
//     int result = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         result += * (ptr);
//         ptr--;
//     }
//     printf("%d \n", result);

//     return (0);
// }

// 04
int main(void)
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int * ptr1 = &arr[0];
    int * ptr2 = &arr[5];
    int temp;
    int array_len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < array_len / 2; i++)
    {
        temp = * (ptr1);
        * (ptr1) = * (ptr2);
        * (ptr2) = temp;
        ptr1 += 1;
        ptr2 -= 1;
    }
    for (int i = 0; i < array_len; i++)
    {
        printf("%d ", arr[i]);
    }
    return (0);
}