#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a, b, c, Max, Min;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int print_max_min(void)
{
    for (int i = 0; i < 2; i++)
    {
        int temp = max(a, b);
        Max = max(temp, c);

        temp = min(a, b);
        Min = min(temp, c);
    }
    printf("Max:%d  Min:%d\n", Max, Min);

    return 0;
}

int main(void)
{
    printf("number1: ");
    scanf_s("%d", &a);
    printf("number2: ");
    scanf_s("%d", &b);
    printf("number3: ");
    scanf_s("%d", &c);

    print_max_min();
    return 0;
}