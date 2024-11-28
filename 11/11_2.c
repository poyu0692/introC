#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

double cos_theorem(double a, double b, double theta_rad)
{
    double c = sqrt(a * a + b * b - 2 * a * b * cos(theta_rad));
    return c;
}

int main(void)
{
    double a, b, theta;
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("θ (degrees) = ");
    scanf("%d", &theta);

    double theta_rad = theta * PI / 180.0;

    double c = cos_theorem(a, b, theta_rad);
    printf("c: %lf", c);

    return 0;
}