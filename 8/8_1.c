#include <stdio.h>

int main(void)
{
    for (char row = 'A'; row <= 'Z'; row++)
    {
        for (char column = 'A'; column <= row; column++)
        {
            printf("%c", column);
        }
        printf("\n");
    }
}