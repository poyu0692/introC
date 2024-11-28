#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE *file = fopen("abc.txt", "w");
    if (file == NULL)
    {
        // If the file does not exist or can't be opened
        printf("指定されたファイルを開けません。");
        return 1;
    }

    for (char let = 'a'; let <= 'z'; let++)
    {
        for (char alpha = let; alpha >= 'a'; alpha--)
        {
            fprintf(file, "%c", alpha);
        }
        fprintf(file, "\n");
    }

    fclose(file);
    return 0;
}