#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char a;
    for (a = 33; a <= 125; a++)
    {
        printf("%03d: %c   ",a ,a);
        if (a % 5 == 0) printf("\n");
    }
    printf("\n");

    return 0;
}