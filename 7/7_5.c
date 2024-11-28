#include <stdio.h>

int main(void)
{
    char x;
    for (x = 0; x < 26; x++)
    {
        if (x % 2 == 0)
            printf("%c", x + 65);
        else
            printf("%c", x + 97);
    }
    return 0;
}