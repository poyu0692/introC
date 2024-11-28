#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char let;
    printf("アルファベットの大文字を１文字入力：");
    scanf("%c", &let);

    int char_dist = let - 'A';
    printf("%cは%d番目の文字です。\n", let, char_dist);

    return 0;
}