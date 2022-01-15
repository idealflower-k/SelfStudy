#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, cnt = 10, size1 = 9, size2 = 0;
    int arr_num[10];

    for (int i = 0; i < cnt; i++)
    {
        printf("입력: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            arr_num[size1--] = num;
        }
        else
        {
            arr_num[size2++] = num;
        }
    }
    printf("배열 요소의 출력: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr_num[i]);
    }
    return (0);
}