#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int score;
    printf("Input Examination score: ");
    scanf("%d", &score);
    
    if (score < 0 || score >100)
    {
        printf("Error");
    }

    int score_tag = score / 10;
    switch (score_tag)
    {
        case 10:
            printf("S");
            break;
        case 9:
            printf("S");
            break;
        case 8:
            printf("A");
            break;
        case 7:
            printf("B");
            break;
        case 6:
            printf("C");
            break;
        case 5:
            printf("E");
            break;
        default:
            printf("Error");
            break;
    }
    
    return 0;
}