#include<stdio.h>

int main(void)
{
    int a, b, c;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    if (c >= a && c <= b){
        printf("c is located between a and b.");
    }

    else if (c >= b && c <= a){
        printf("c is located between a and b.");
    }

    else {
        printf("c is'nt located between a and b.");
    }
}