#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 01
// int main(void)
// {
//     int arr[5],arrlen, max = 0, min = 0, total = 0;


//     printf("정수 5개 입력: ");
//     scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
//     arrlen = sizeof(arr) / sizeof(arr[0]);
//     min = arr[0];

//     for (int i = 0; i < arrlen; i++)
//     {
//         total += arr[i];
//         max = arr[i] > max ? arr[i] : max;
//         min = arr[i] < min ? arr[i] : min;
//     }
//     printf("최댓값: %d, 최솟값: %d, 총 합: %d\n", max, min, total);

//     return (0);
// }

// 02
int main(void)
{
    char arr[] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
    int arrlen;
    arrlen = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < arrlen; i++)
    {
        printf("%c", arr[i]);
    }
    return (0);
}