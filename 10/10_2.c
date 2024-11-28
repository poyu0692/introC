#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

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

    char num[128];
    double sum = 0;
    int data_cnt = 0;
    while (fgets(num, sizeof(num), file) != NULL)
    {
        sum += atof(num);
        data_cnt++;
    }
    double average = sum / data_cnt;
    printf("\nデータ数%d個\n", data_cnt);
    printf("平均値：%f\n", average);

    fclose(file);

    return 0;
}