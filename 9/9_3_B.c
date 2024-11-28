#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a, b;

    printf("整数aを入力：");
    scanf("%d", &a);
    printf("整数bを入力：");
    scanf("%d", &b);
    for (int i = 1; i < 5; i++)
    {
        swap(&a, &b);
    }
    printf("整数aが%dに変わった。\n", a);
    printf("整数bが%dに変わった。\n", b);

    return 0;
}