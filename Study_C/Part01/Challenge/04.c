#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

const int BREAD = 500;
const int SNACK = 700;
const int DRINK = 400;

int main(void)
{
    int i, j, k;
    int money;
    printf("현재 소유하고 있는 현금: ");
    scanf("%d", &money);

    for (i = 1; i < money / BREAD; i++)
    {
        for (j = 1; j < money / SNACK; j++)
        {
            for (k = 1; k < money / DRINK; k++)
            {
                if (money == (BREAD * i) + (SNACK * j) + (DRINK * k))
                {
                    printf("크림빵: %d개, 새우깡: %d개, 콜 라: %d개\n", i, j, k);
                }
            }
        }
    }
    return (0);
}