#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int arr1[3][4];
    int arr2[7][9];
    printf("세로3, 가로4: %d \n", sizeof(arr1));    // 3x4x4 = 48
    printf("세로7, 가로9: %d \n", sizeof(arr2));    // 7x9x4 = 252

    return (0);
}