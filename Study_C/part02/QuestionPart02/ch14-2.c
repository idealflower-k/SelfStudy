#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 01 const 선언 의도 파악해보기
void ShowAllData(const int * arr, int len)
{
    int i;
    for (i = 0; i < len; i ++)
    {
        printf("%d ", arr[i]);
    }
}

// 02
void ShowData(const int * ptr)
{
    int * rptr = ptr;    // rptr을 이용해서 ptr이 가리키는 변수에 저장된 값을 변경할 수 았는 상황이 되어 버렸다. const 선언이 무의미 하게됨
    printf("%d \n", * rptr);
    * rptr = 20;
}

int main(void)
{
    int num = 10;
    int * ptr = &num;
    ShowData(ptr);

    return (0);
}