#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 01
// int main(void)
// {
//     int arr[3][9] = {
//         {2, 4, 6, 8, 10, 12, 14, 16, 18},
//         {3, 6, 9, 12, 15, 18, 21, 24, 27},
//         {4, 8, 12, 16, 20, 24, 28, 32, 36}
//     };
//     int i, j;

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 9; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return (0);
// }

// 02
// int main(void)
// {
//     int arr1[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int arr2[4][2];
//     int i, j;

//     for (j = 0; j < 4; j++)
//     {
//         for (i = 0; i < 2; i++)
//         {
//             arr2[j][i] = arr1[i][j];
//         }
//     }

//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             printf("%d ", arr2[i][j]);
//         }
//         printf("\n");
//     }

//     return (0);
// }

// 03
int main(void)
{
    int arr[5][5];
    int i, j;

    for (i = 0; i < 4; i ++)
    {
        printf("철희, 철수, 영희, 영수 점수: ");
        scanf("%d %d %d %d", &arr[0][i], &arr[1][i], &arr[2][i], &arr[3][i]);
    }


    for (i = 0; i < 4; i++)
    {
        int sub_total = 0;
        for (j = 0; j < 4; j++)
        {
            sub_total += arr[j][i];
        }
        arr[4][i] = sub_total;
    }

    for (i = 0; i < 5; i++)
    {
        int total = 0;
        for (j = 0; j < 4; j++)
        {
            total += arr[i][j];
        }
        arr[i][4] = total;
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return (0);
}