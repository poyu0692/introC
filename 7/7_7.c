#include <stdio.h>

int is_perfect(int num);

int main()
{
    for (int i = 1; i <= 10000; i++)
    {
        if (is_perfect(i))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

int is_perfect(int num)
{
    int sum = 0;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return sum == num;
}
