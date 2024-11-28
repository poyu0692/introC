#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// Declerar prototype
char* Init_Capitalize(char* str);


int main(void)
{
    printf("19文字以下の文字列を入力：");

    char str[20];
    scanf("%s", &str);
    printf("%s", Init_Capitalize(str));

    return 0;
}

// Initial character of word is to upper, and other are to lower
char* Init_Capitalize(char* str)
{
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }

    for (int i = 1; i <= strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    return str;
}