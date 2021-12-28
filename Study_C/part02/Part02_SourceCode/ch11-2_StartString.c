#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)  // 문자열의 끝은 \0 이다.
{
    char str[50] = "I like C programming";
    printf("string: %s \n", str);

    str[8] = '\0';
    printf("string: %s \n", str);
    
    str[6] = '\0';
    printf("string: %s \n", str);

    str[1] = '\0';
    printf("string: %s \n", str);

    return (0);
}