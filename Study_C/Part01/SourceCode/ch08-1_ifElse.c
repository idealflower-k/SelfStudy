#include <stdio.h>

//01
// int main(void)
// {
//     for (int i = 1; i < 100; i++)
//     {
//         if (i % 7 == 0 || i % 9 == 0)
//         {
//             printf("7 또는 9의 배수: %d\n", i);
//         }
//     }
//     return (0);
// }

// 02
// int main(void)
// {
//     int num1, num2, result = 0;

//     printf("두 개의 정수 입력: ");
//     scanf("%d %d", &num1, &num2);
    
//     result = (num1 > num2 ? num1 - num2 : num2 - num1);

//     printf("%d", result);
// }

// 03
// int main(void)
// {
//     int kor, eng, mat;
//     char grade;
//     double ave;
    
//     printf("국 영 수 점수 입력: ");
//     scanf("%d %d %d", &kor, &eng, &mat);

//     ave = (double) (kor + eng + mat) / 3;

//     if (ave >= 90)
//     {
//         grade = 'A';
//     }
//     else if (ave >= 80)
//     {
//         grade = 'B';
//     }
//     else if (ave >= 70)
//     {
//         grade = 'C';
//     }
//     else if (ave >= 50)
//     {
//         grade = 'D';
//     }
//     else
//     {
//         grade = 'F';
//     }
//     printf("%.2f %c",ave, grade);

//     return (0);
// }