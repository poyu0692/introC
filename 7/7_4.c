#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x;
    printf("３桁の自然数を入力：");
    scanf("%d", &x);
    printf("１の位：%d\n", x % 10);
    printf("１０の位：%d\n", (x % 100) / 10);
    printf("１００の位：%d\n", x / 100);

    return 0;
}