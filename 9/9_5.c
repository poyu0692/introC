#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fc(int m)
{
    int ans = 1;
    for (int i = 2; i <= m; i++)
    {
        ans *= i;
    }
    return ans;
}

int main(void)
{
    int m, n;
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);

    printf("%dC%d = ", m, n);
    printf("%d\n", fc(m) / (fc(m - n) * fc(n)));

    return 0;
}