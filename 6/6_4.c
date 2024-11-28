#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
    printf("39文字以下の文字列を入力：");

    char str[40];
    scanf("%s", str);
    printf("%sは%d文字です。\n", str, strlen(str));

    return 0;
}