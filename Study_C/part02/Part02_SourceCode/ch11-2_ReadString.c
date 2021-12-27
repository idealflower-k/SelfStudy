#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[50];
    int idx = 0;

    printf("문자열 입력: ");
    scanf("%s", str);   // 문자열을 입력 받는 배열의 이름 앞에는 & 연사자를 붙이지 않는다!!
    printf("입력 받은 문자열: %s \n", str);

    printf("문자 단위 출력: ");
    while(str[idx] != '\0')
    {
        printf("%c", str[idx]);
        idx++;
    }
    printf("\n");

    return (0);
}