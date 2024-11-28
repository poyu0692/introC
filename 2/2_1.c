#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void)
{
    int hg = 0,lw = 1,i;

    for(i = 0; i <= 50; i++)
    {
        printf("２の%d乗は", i);
        printf("%08d%08dです. \n", hg ,lw);
        lw *= 2;
        hg *= 2;

        if (lw >= 100000000)
        {
            hg++;
            lw %= 100000000;
        }
    }
    return 0;
}