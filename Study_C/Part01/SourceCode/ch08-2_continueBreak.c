#include <stdio.h>

// 01
// int main(void)
// {
//     int i, j;
//     for (i = 1; i < 10; i++)
//         if (i % 2 != 0)
//         {
//             continue;
//         }
//         else
//         {
//             for (j = 1; j <= i; j++)
//             {
//                 printf("%d x %d = %d\n", i, j, i*j);
//             }
//         }
// }

// 02
int main(void)
{
    int a, z;
    int total = 0;
    total = a + z;

    for (a = 1; a <= 9; a++)
        for (z = 1; z <= 9; z++)
        {
            if (a == z)
            {
                continue;
            }
            total = (a*10 + z) + (z*10 + a);
            if (total == 99)
            {
                printf("a = %d, z = %d\n", a, z);
            }
        }
}