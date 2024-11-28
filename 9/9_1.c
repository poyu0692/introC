#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sec_to_hour(int inSec)
{
    int sec = inSec % 60;
    int min = inSec / 60;
    int hour = min / 60;
    min = min % 60;

    printf("%d時%d分%d秒\n", hour, min, sec);

    return 0;
}

int main(void)
{
    int t;
    printf("Input seconds: ");
    if (scanf_s("%d", &t) != 1 || t < 0)
        return 1;
    sec_to_hour(t);

    return 0;
}