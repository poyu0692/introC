#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
    printf("39文字以下の文字列を入力：");

    char str[40];
    scanf("%s", str);
    for (int i = strlen(str); i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}