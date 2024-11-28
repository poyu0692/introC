#include <stdio.h>

typedef struct
{
    int number;
    double gas_capacity;
} Car;

int main(void)
{
    Car car1;
    car1.number = 5634;
    car1.gas_capacity = 4.5;

    Car car2;
    car2.number = 4356;
    car2.gas_capacity = 5.6;
}