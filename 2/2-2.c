#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main (void)
{
    int divided, divisor;

    // read values used to divison
    printf("Divided value: ");
    scanf("%d", &divided);
    printf("Divisor value: ");
    scanf("%d", &divisor);

    int quotient = divided / divisor;
    int remainder = divided % divisor;

    // print division result
    printf("---calculation result---\n");
    printf("quotient is %d   ", quotient);
    printf("remainder is %d\n", remainder);

    return 0;
}