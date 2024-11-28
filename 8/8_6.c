#include <stdio.h>
#include <math.h>

int main(void)
{
    int a;
    int b;
    double c;

    for (a = 1; a <= 100; a++)
    {
        for (b = 1; b <= 100; b++)
        {
            c = sqrt(pow(a, 2) + pow(b, 2));
            double intPart = floor(c);
            double fractionalPart = c - intPart;

            if (fractionalPart == 0.0)
            {
                int temp = (int)round(c);
                printf("%d^2 + %d^2 = %d^2\n", a, b, temp);
            }
        }
    }
}