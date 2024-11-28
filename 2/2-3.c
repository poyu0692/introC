#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void)
{
    int Fahrenheit; // ℉
    int tempFah;
    int Celsius; // ℃

    printf("Enter Fahrenheit temperature: ");
    scanf("%d", &Fahrenheit);

    // caluculate Celsius
    tempFah = Fahrenheit;
    Celsius = ((tempFah - 32) * 5) / 9;

    printf("\n---Result---\n");
    printf("%d degrees Fahrenheit is %d degrees Celsius.", Fahrenheit, Celsius);
    return 0;
}