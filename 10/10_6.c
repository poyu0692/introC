#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEXT_LEN 100
#define ROW_LEN 200

typedef struct
{
    char **arrayed_file; // ファイル内容を文字列の配列として格納
    int row;             // 行数
} ArrayedFile;

// 新しいファイルを作成
FILE *NewFile()
{
    char file_path[100];
    printf("input file path: ");
    scanf("%s", file_path);

    FILE *file = fopen(file_path, "r");
    if (file == NULL)
    {
        printf("指定されたファイルを開けません。\n");
        exit(EXIT_FAILURE);
    }

    return file;
}

// ファイルを配列化
ArrayedFile Arrayization(FILE *file)
{
    ArrayedFile stream;
    stream.row = 0;

    // メモリ確保
    stream.arrayed_file = (char **)malloc(ROW_LEN * sizeof(char *));
    if (stream.arrayed_file == NULL)
    {
        printf("メモリ確保に失敗しました。\n");
        exit(EXIT_FAILURE);
    }

    char buffer[TEXT_LEN];
    while (fgets(buffer, TEXT_LEN, file) != NULL)
    {
        buffer[strcspn(buffer, "\n")] = '\0'; // 改行を削除
        stream.arrayed_file[stream.row] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        if (stream.arrayed_file[stream.row] == NULL)
        {
            printf("メモリ確保に失敗しました。\n");
            exit(EXIT_FAILURE);
        }
        strcpy(stream.arrayed_file[stream.row], buffer);
        stream.row++;
    }

    fclose(file);
    return stream;
}

// 配列化したファイル内容を比較
void CompareFiles(ArrayedFile file1, ArrayedFile file2)
{
    int max_rows = (file1.row > file2.row) ? file1.row : file2.row;
    printf("\n--- Comparing Files ---\n");
    for (int i = 0; i < max_rows; i++)
    {
        char *line1 = (i < file1.row) ? file1.arrayed_file[i] : "(no line)";
        char *line2 = (i < file2.row) ? file2.arrayed_file[i] : "(no line)";

        if (strcmp(line1, line2) != 0)
        {
            printf("Line %d differs:\n", i + 1);
            printf("  File 1: %s\n", line1);
            printf("  File 2: %s\n", line2);
            exit(EXIT_SUCCESS);
        }
    }
}

// メモリ解放
void FreeArrayedFile(ArrayedFile *file)
{
    for (int i = 0; i < file->row; i++)
    {
        free(file->arrayed_file[i]);
    }
    free(file->arrayed_file);
}

int main(void)
{
    FILE *file1 = NewFile();
    FILE *file2 = NewFile();

    ArrayedFile file1_arrayed = Arrayization(file1);
    ArrayedFile file2_arrayed = Arrayization(file2);

    CompareFiles(file1_arrayed, file2_arrayed);

    FreeArrayedFile(&file1_arrayed);
    FreeArrayedFile(&file2_arrayed);

    return 0;
}
