#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char let;
    printf("アルファベットの大文字を１文字入力：");
    scanf("%c", &let);

    if (isalpha(let) != 0)
    {
        int char_dist = let - 'A';
        printf("%cは%d番目の文字です。\n", let, char_dist);
    }
    else 
    {
        printf("アルファベットの大文字以外の文字が入力されました。\n");
    }

    return 0;
}