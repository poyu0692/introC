#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("No.%d:", i + 1);
        scanf("%d", &a[i]);
    }
    for(int i = 4; i >= 1; i--)
    {
        printf("%d, ", a[i]);
    }
    printf("%d\n", a[0]);

    return 0;
}