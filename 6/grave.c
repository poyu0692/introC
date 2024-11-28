#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
    char x[40], i;
    printf("39文字以下の文字列を入力：");
    scanf("%s", x);
    printf("入力された文字列は");
    for (i = 0; x[i] != '\0'; i++)
    {
        printf("%c", x[i]);
    }
    printf("です。\n");
}