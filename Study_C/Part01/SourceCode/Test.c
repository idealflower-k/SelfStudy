#include <stdio.h>

int main(void)
{
    int age;

    printf("나이 입력: ");
    scanf("%d", &age);
    printf("제 나이는 10진수로 %d살, 16진수로 %x살입니다", age, age);


    return (0);
}