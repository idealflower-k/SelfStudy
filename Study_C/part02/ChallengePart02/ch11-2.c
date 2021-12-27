#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 01
// int main(void)
// {
//     char arr[50];
//     int arrLen = 0;

//     printf("영어 단어 입력: ");
//     scanf("%s", arr);

//     while (arr[arrLen] != 0)
//     {
//         arrLen++;
//     }
//     printf("%d", arrLen);
// }

// 02
// int main(void)
// {
//     char arr[50];
//     int len = 0, i;
//     char temp;

//     printf("영단어 입력: ");
//     scanf("%s", arr);

//     while (arr[len] != 0)
//     {
//         len++;
//     }
    
//     for (i = 0; i < len/2; i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[(len - i) - 1];
//         arr[(len - i) - 1] = temp;
//     }
//     printf("%s", arr);

//     return (0);
// }

// 03
int main(void)
{
    char arr[50];
    int len, i;
    char max = 0;

    printf("영단어 입력: ");
    scanf("%s", arr);

    while (arr[len] != 0)
    {
        len++;
    }
    for (i = 0; i < len; i++)
    {
        max = arr[i] > max ? arr[i] : max;
    }
    printf("%d %c", max, max);
    
    return (0);
}