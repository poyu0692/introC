#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 26; i++)
    {
        if ((i + 1) % 5 == 0) // もしアルファベットが5^nなら
            printf("%c", 'A' + i);
        else
            printf("%c", 'a' + i);
    }
    return 0;
}