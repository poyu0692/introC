#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_NUM 100
#define N 1000

int main(void)
{
    FILE *file = fopen("num.txt", "w");

    for (int row = 0; row <= NUMBER_OF_NUM; row++)
    {
        int num = rand() % (N + 1);
        fprintf(file, "%d", num);
        fprintf(file, "\n");
    }

    return 0;
}