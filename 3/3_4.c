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

    if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0) {
        printf("%d, %d, %d", a, b, c);
    }

    else {
        printf("All numbers are'nt even number");
    }
}