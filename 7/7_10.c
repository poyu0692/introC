#include <stdio.h>

void correct_range(int start, int end, int correct_answer);
int count = 0;

int main(void)
{
    int correct_answer;
    printf("正解の数値を入力（親が入力）：");
    scanf("%d", &correct_answer);
    printf("１から９９の自然数を当ててください。\n");
    correct_range(0, 100, correct_answer);
}

void correct_range(int start, int end, int correct_answer)
{
    int answer;
    printf("%d<x<%d  x:", start, end);
    scanf("%d", &answer);
    if (answer == correct_answer)
    {
        printf("正解！  %d回の入力で正解しました。", count);
    }
    count++;
    start = (start + correct_answer) / 2;
    end = (end + correct_answer) / 2;
    correct_range(start, end, correct_answer);
}
