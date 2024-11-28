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

    char text[128];
    char a_cnt = 0;
    while (fgets(text, sizeof(text), file) != NULL)
    {
        for (int i = 0; i < strlen(text); i++)
        {
            if (text[i] == 'a')
                a_cnt++;
        }
    }

    printf("文字aは%d個ありました。", a_cnt);
    fclose(file);
    return 0;
}
