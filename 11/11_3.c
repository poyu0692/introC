#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

int main(void)
{
    double x;
    FILE *file = fopen("sin.txt", "w");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    for (x = 0; x <= 2 * PI; x += 0.01)
    {
        fprintf(file, "%f %f\n", x, sin(x));
    }
}