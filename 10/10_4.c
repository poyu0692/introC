#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int row = 0;
    while (fgets(line[row], sizeof(line), file) != NULL)
    {
        row++;
    }

    for (int i = row - 1; i >= 0; i--)
    {
        printf("%s", line[i]);
    }

    fclose(file);
    return 0;
}
