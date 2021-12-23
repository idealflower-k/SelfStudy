#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void HMS(int user_sec)
{
    int hour, min, sec;
    hour = user_sec / 360;
    min = (user_sec % 360) / 60;
    sec = user_sec - (hour * 360) - (min * 60);

    printf("H: %d M: %d S: %d", hour, min, sec);

    return;
}
int main(void)
{
    int user_sec;
    printf("초 입력: ");
    scanf("%d", &user_sec);
    HMS(user_sec);

    return (0);
}