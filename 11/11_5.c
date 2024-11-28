#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Most longest word: e.g.Pneumonoultramicroscopicsilicovolcanoconiosis
#define MAX_LEN 46

void remove_newline(char *word)
{
    size_t len = strlen(word);
    if (len > 0 && word[len - 1] == '\n')
    {
        word[len - 1] = '\0'; // 改行を終端文字に置き換える
    }
}

int main(void)
{
    FILE *file = fopen("text.txt", "r");

    char word[MAX_LEN];
    int word_cnt = 0;
    int max_len = 0;
    int min_len = MAX_LEN;
    int sum_len = 0;
    while (fgets(word, sizeof(word), file) != NULL)
    {
        remove_newline(word);
        int current_len = strlen(word);

        if (current_len > max_len)
        {
            max_len = current_len;
        }

        if (current_len < min_len)
        {
            min_len = current_len;
        }

        sum_len += current_len;
        word_cnt++;
    }

    double len_average = sum_len / word_cnt;
    printf("\n---Result---\n");
    printf("全単語数：%d個\n", word_cnt);
    printf("最大文字数：%d文字\n", max_len);
    printf("最小文字数：%d文字\n", min_len);
    printf("平均文字数：%f文字\n", len_average);
}