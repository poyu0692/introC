#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void remove_newline(char *str)
{
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0'; // 改行を終端文字に置き換える
    }
}

int main(void)
{
    char search_word[21];
    printf("探索する単語を入力してください：");
    scanf("%s", search_word);

    FILE *file = fopen("text.txt", "r");

    char str[100];
    int same_word_cnt = 0;
    while (fgets(str, sizeof(str), file) != NULL)
    {
        remove_newline(str);
        if (strcmp(str, search_word) == 0)
        {
            same_word_cnt++;
        }
    }

    if (same_word_cnt > 0)
        printf("お探しの単語は%d個存在します。", same_word_cnt);
    else
        printf("お探しの単語は存在しません。");
}