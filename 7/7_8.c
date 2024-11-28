#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int shift;
    char rawstr[20];

    printf("シフト数：");
    scanf("%i", &shift);
    printf("文字列：");
    scanf("%s", rawstr);

    for (int i = 0; i < strlen(rawstr); i++)
    {
        char shifted_char = ((rawstr[i] - 'a' + shift) % 26 + 26) % 26 + 'a';
        printf("%c", shifted_char);
    }
    return 0;
}