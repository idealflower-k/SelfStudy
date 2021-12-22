#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int z = 0; z < 4; z++)
            {
                printf("%d %d %d\n", i, j, z);
            }
        }
    }
}