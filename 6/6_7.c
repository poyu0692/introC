#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
    printf("試験結果を入力してください。");

    const int num_member = 3;
    int score[5];
    for (int i = 0; i < 5; i++)
    {
        score[i] = 0;
    }
    
    for (int i = 0; i < num_member; i++)
    {
        printf("\n%d人目：", i + 1);

        int indiv_score;
        scanf("%d", &indiv_score);
        int index = indiv_score / 10;

        switch (index)
        {
        case 0:
        case 1: 
            score[0]++; break;
        case 2:
        case 3:
            score[1]++; break;
        case 4:
        case 5:
            score[2]++; break;
        case 6:
        case 7:
            score[3]++; break;
        case 8:
        case 9:
        case 10:
            score[4]++; break;
        default: break;
        }
    }
    
    for (int i = 0; i < 5; i++)
        {
            int bottom = i * 20;
            int top = bottom + 20;
            printf("%d-%d: %d\n",bottom, top, score[i]);
        }

    return 0;
}