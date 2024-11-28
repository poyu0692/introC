#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 最初の値を入力
    printf("最初の値：");
    long num1;
    scanf("%d", &num1);

    // 二番目の値を入力
    printf("二番目の値：");
    long num2;
    scanf("%d", &num2);

    int diff = labs(num1 - num2);

    printf("2数の差は%dです", diff);

    return 0;
}