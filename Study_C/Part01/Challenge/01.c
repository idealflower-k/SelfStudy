#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;
    printf("10진수 정수를 16진수로 출력: ");
    scanf("%d", &num);
    printf("%d = %x", num, num);
}