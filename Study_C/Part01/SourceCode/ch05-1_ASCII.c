#include <stdio.h>

// 01
// int main(void)
// {
//     int x1, x2, y1, y2, transverse, length;

//     printf("좌 상단의 x, y 좌표: ");
//     scanf("%d %d", &x1, &y1);
//     printf("우 하단의 x, y 좌표: ");
//     scanf("%d %d", &x2, &y2);

//     transverse = x2 - x1;
//     length = y2 - y1;
//     printf("넓이: %d", transverse * length);

//     return (0);
// }

// 02
// int main(void)
// {
//     double num1, num2;
//     printf("두개의 실수 입력: ");
//     scanf("%lf %lf", &num1, &num2);

//     printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
//     printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
//     printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
//     printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);

//     return (0);
// }

// 03
/*
질문_1 : 아스키 코드를 구성하는 값의 범위는 어떻게 되는가? 0 ~ 127
질문_2 : 대문자 A에서부터 대문자 Z까지 값이 어떻게 증가하는가?(증가의 폭) 1씩 증가
질문_3 : 알파벳 대문자와 소문자간의 값의 차는 어떻게 되는가? 32
*/

// 04
// int main(void)
// {
//     int ch;

//     printf("정수 입력: ");
//     scanf("%d", &ch);

//     printf("%c", ch);

//     return (0);
// }

// 05
int main(void)
{
    char ch;

    printf("알파벳 문자 입력: ");
    scanf("%c", &ch);

    printf("%d", ch);

    return (0);
}