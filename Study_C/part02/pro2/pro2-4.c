#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void palindrome(char * arr, int len)
{
    int back = len - 1;
    for (int i = 0; i < (len / 2); )
    {
        if (arr[i] == arr[back])
        {
            i++;
            back--;
        }
        else
        {
            printf("회문이 아닙니다.\n");
            return;
        }
    }
    printf("회문입니다.");
    return;
}

int main(void)
{
    char arr[30];
    int len;
    printf("문자열 입력: ");
    scanf("%s", arr);
    len = strlen(arr);

    palindrome(arr, len);
}
