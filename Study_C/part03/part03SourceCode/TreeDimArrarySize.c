#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int arr1[2][3][4];
    double arr2[5][5][5];
    printf("높이 2, 세로3, 가로 4 int형 배열: %ld \n", sizeof(arr1));
    printf("높이 5, 세로5, 가로 5 double형 배열: %ld \n", sizeof(arr2));
    
    return (0);
}