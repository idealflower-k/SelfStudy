#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int arr3[5] = {1, 2};
    int ar1len, ar2len, ar3len, i;

    printf("배열 arr1의 크기: %ld \n", sizeof(arr1));
    printf("배열 arr2의 크기: %ld \n", sizeof(arr2));
    printf("배열 arr3의 크기: %ld \n", sizeof(arr3));

    ar1len = sizeof(arr1) / sizeof(int);
    ar2len = sizeof(arr2) / sizeof(int);
    ar3len = sizeof(arr3) / sizeof(int);

    for (i = 0; i < ar1len; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    for (i = 0; i < ar2len; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    for (i = 0; i < ar3len; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return (0);
}