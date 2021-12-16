#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 01
// int GetBigOne(int, int, int);
// int GetSmallOne(int, int, int);

// int main(void)
// {
//     int num1, num2, num3;

//     printf("3개의 정수 입력: ");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     printf("%d, %d, %d 중 가장 큰 정수 = %d \n", num1, num2, num3, GetBigOne(num1, num2, num3));
//     printf("%d, %d, %d 중 가장 작은 정수 = %d \n", num1, num2, num3, GetSmallOne(num1, num2, num3));

//     return (0);
// }

// int GetBigOne(int num1, int num2, int num3)
// {
//     if (num1 > num2 && num1 > num3)
//     {
//         return num1;
//     }
//     else if (num2 > num1 && num2 > num3)
//     {
//         return num2;
//     }
//     else
//     {
//         return num3;
//     }
// }
// int GetSmallOne(int num1, int num2, int num3)
// {
//     if (num1 < num2 && num1 < num3)
//     {
//         return num1;
//     }
//     else if (num2 < num1 && num2 < num3)
//     {
//         return num2;
//     }
//     else
//     {
//         return num3;
//     }
// }

// 02
// void CelToFah();
// void FahToCel();

// int main(void)
// {
//     CelToFah();
//     FahToCel();
// }
// // fah = 1.8 * cel + 32
// void CelToFah(void)
// {
//     double cel, fah;
//     printf("섭씨를 화씨로 변환하는 함수\n섭씨를 입력하세요: ");
//     scanf("%lf", &cel);
//     fah = 1.8 * cel + 32;
//     printf("섭씨: %.2f = 화씨 %.2f\n", cel, fah);
//     return;
// }
// void FahToCel(void)
// {
//     double cel, fah;
//     printf("화씨를 섭씨로 변환하는 함수\n화씨를 입력하세요: ");
//     scanf("%lf", &fah);
//     cel = (fah - 32) / 1.8;
//     printf("화씨: %.2f = 섭씨 %.2f\n", fah, cel);
//     return;
// }

// 03
void Fibonacci(int);

int main(void)
{
    int count;
    printf("정수 입력: ");
    scanf("%d", &count);
    Fibonacci(count);
}

void Fibonacci(int count)
{
    int num1 = 0;
    int num2 = 1;
    int temp;

    printf("%d, %d, ", num1, num2);
    for (int i = 2 ; i < count; i++)
    {
        temp = num2;
        num2 = num1 + num2;
        num1 = temp;
        printf("%d, ", num2);
    }
    return;
}