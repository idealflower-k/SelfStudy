#include <stdio.h>

int main(void)
{
    int num;
    printf("정수 입력(0이상): ");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        printf("0이상 10미만\n");
        break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
        printf("10이상 20미만\n");
        break;
    default:
        printf("20이상\n");
    }
    return (0);
}