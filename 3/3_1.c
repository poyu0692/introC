#include <stdio.h>

int main(void)
{
    int a; // devided
    int b; // devisor
    int quotient;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    if (a%b == 0){
        quotient = a / b;
        printf("quotient is %d", quotient);
    }
    
    else {
        int remainder;

        quotient = a / b;
        remainder = a % b;
        printf("quotient is %d\n", quotient);
        printf("remainder is %d\n", remainder);
    }
}