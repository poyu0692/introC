#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("Innput %d column, %d row: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d, ", a[i][j]);
        printf("%d\n", a[i][j]);
    }
}