#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPHA_LEN 26

int Histogram(int date[])
{
    for (int i = 0; i < ALPHA_LEN; i++)
    {
        printf("%c: %d\n", i + 'a', date[i]);
    }

    return 0;
}

int main(void)
{
    char file_path[64];
    printf("file path: ");
    scanf("%s", file_path);
    FILE *file = fopen(file_path, "r");
    if (file == NULL)
    {
        // If the file does not exist or can't be opened
        printf("指定されたファイルを開けません。");
        return 1;
    }

    char line[50][100] = {};
    int alpha_cnt[ALPHA_LEN] = {};
    int row = 0;
    while (fgets(line[row], sizeof(line), file) != NULL)
    {
        row++;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < strlen(line[i]); j++)
        {
            if (line[i][j] >= 'a' && line[i][j] <= 'z')
            {
                int alpha = line[i][j] - 'a';
                alpha_cnt[alpha]++;
            }
        }
    }
    Histogram(alpha_cnt);

    return 0;
}