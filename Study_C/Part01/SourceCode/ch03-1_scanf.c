#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// sol_1 두 개의 정수를 입력 받아서 뺄셈과 곱셈의 결과 출력
// int main(void)
// {
//     int num1, num2;
//     int result1, result2;

//     printf("두 개의 정수를 입력 : ");
//     scanf("%d %d", &num1, &num2);
//     result1 = num1 - num2;
//     result2 = num1 * num2;

//     printf("num1 - num2 = %d\n", result1);
//     printf("num1 * num2 = %d\n", result2);

//     return (0);
// }

// sol_2 정수 3개를 입력받아 num1 X num2 + num3 =   출력
// int main(void)
// {
//     int num1, num2, num3;
//     int result;

//     printf("정수 세 개를 입력: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     result = num1 * num2 + num3;
//     printf("%d x %d + %d = %d", num1, num2, num3, result);

//     return (0);
// }

// sol_3 하나의 정수를 입력받아서, 제곱 결과 출력
// int main(void)
// {
//     int num;

//     printf("정수를 입력하세요: ");
//     scanf("%d", &num);

//     printf("%d", num * num);

//     return (0);
// }

// sol_4 입력받은 두 정수를 나누었을 때 먿게되는 몫과 나머지 출력
// int main(void)
// {
//     int num1, num2, share, rest;

//     printf("두 정수입력: ");
//     scanf("%d %d", &num1, &num2);

//     share = num1 / num2;
//     rest = num1 % num2;

//     printf("%d 나누기 %d = 몫: %d, 나머지: %d", num1, num2, share, rest);

//     return (0);
// }

// sol_5 정수 3개 (num1 - num2) x (num2 + num3) x (num3 % num1)
int main(void)
{
    int num1, num2, num3, result;

    printf("정수 3개를 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = (num1 - num2) * (num2 + num3) * (num3 % num1);

    printf("(num1 - num2) x (num2 + num3) x (num3 %% num1) = %d", result );

    return (0);
}