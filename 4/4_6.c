#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char alpha;
    printf("Input letter of capital alphabet: ");
    scanf("%c", &alpha);

    if (alpha >= 'A' && alpha <= 'Z')
    {
        printf("%c\n", alpha);
    }
    else if (alpha >= 'a' && alpha <= 'z')
    {
        alpha = toupper(alpha);
        printf("%c\n", alpha);
    }

    return 0;
}