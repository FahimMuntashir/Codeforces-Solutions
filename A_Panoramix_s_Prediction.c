#include <stdio.h>

int main()
{
    int m, n;
    int prime[] = { 2,  3,  5,  7,   11, 13,  17,  19,  23,  29, 31, 37, 41, 43, 47};
    scanf("%d%d", &m, &n);
    int count = 0;

    for (int i = 0; i < 15; i++)
    {
        if (m==prime[i] && n== prime[i+1])
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}