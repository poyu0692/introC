#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calc(int x)
{
    x = (x + 5) * 3;
    return x;
}

int main(void)
{
    int x, y;
    scanf("%d", &x);
    y = calc(x);
    printf("Answer = %d", y);
    return 0;
}