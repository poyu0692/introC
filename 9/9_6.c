#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int GCD(int x, int y) // greatest common divisor
{
    while (true)
    {
        if (x > y)
            x = x - y;
        else if (x < y)
            y = y - x;
        else if (x == y)
            return x;
    }
}

int main(void)
{
    int x, y;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    int gcd = GCD(x, y);
    printf("%d", gcd);
}
