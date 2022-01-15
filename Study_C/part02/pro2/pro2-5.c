
#include <stdio.h>

void des_sort(int * arr, int len)
{
    int i, j;
    int temp;
    
    for (i = 0; i < len -1; i++)
    {
        for (j = 0; j < (len - i); j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return;
}

int main(void)
{
    int arr[7];
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    
    des_sort(arr, len);

    return (0);
}

