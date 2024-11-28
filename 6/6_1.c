#include<stdio.h>

int main(void)
{
    double x;
    for (x = 3; x < 4; x += 0.0001)
    {
        if(x * x >= 11) break;
    }
    printf("11の正の平方根は%.4fです。\n", x);

    return 0;
}