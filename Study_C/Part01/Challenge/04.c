#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const int cream = 500, shrimp = 700, coke = 400;
    int change = 0, n_cream = 1, n_shrimp = 1, n_coke = 1;
    int i = 0, j = 0, temp;
    printf("현재 당신이 소유하고 있는 금액: ");
    scanf("%d", &change);

    temp = change;

    for (n_cream = 1; n_cream * cream <= change; n_cream++)
    {   
        if (change == (n_cream * cream) + (n_shrimp * shrimp) + (n_coke * coke))
        {
            printf("크림빵: %d개, 새우깡: %d개, 콜 라: %d개\n", n_cream, n_shrimp, n_coke);
        }
        for (n_shrimp = 1; n_shrimp * shrimp <+ change; n_shrimp++)
        {   
            if (change == (n_cream * cream) + (n_shrimp * shrimp) + (n_coke * coke))
            {
                printf("크림빵: %d개, 새우깡: %d개, 콜 라: %d개\n", n_cream, n_shrimp, n_coke);
            }
            for (n_coke = 1; n_coke * coke <= change; n_coke++)
            {
                if (change == (n_cream * cream) + (n_shrimp * shrimp) + (n_coke * coke))
                {
                    printf("크림빵: %d개, 새우깡: %d개, 콜 라: %d개\n", n_cream, n_shrimp, n_coke);
                }
            }
        }
    }    
    return (0);
}