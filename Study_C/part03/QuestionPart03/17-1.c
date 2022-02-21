#include <stdio.h>

void MaxAndMin(int * arr, int size, int ** mxptr, int **mnptr)
{
    int * max, * min;
    int i;

    max = min = &arr[0];    // arr[0]의 주소값을 저장
    for (i = 0; i < size; i++)
    {
        if (* max < arr[i]) // max가 가리키는 값을 최대값으로 저장
        {
            max = &arr[i];
        }
        if (* min > arr[i]) // min이 가리키는 값을 최소값으로 저장
        {
            min = &arr[i];
        }
    }
    * mxptr = max;  // 매개변수에 max(주소값)을 저장
    * mnptr = min;  // 매개변수에 min(주소값)을 저장
}
int main(void)
{
    int * maxptr;
    int * minptr;
    int arr[5];
    int i;
    
    for (i = 0; i < 5; i++)
    {
        printf("정수 입력 %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxptr, &minptr);    // 매개변수로 arr(배열), size, maxptr(주소값), minptr(주소값) 전달
    printf("최대: %d, 최소: %d \n", *maxptr, *minptr);

    return (0);
}