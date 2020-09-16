#include <stdio.h>

int main()

{
    int a, b;
    int res = 0, sum = 0,rem;
    scanf("%d%d", &a, &b);

     rem = 240 - b;

    for (int i = 1; i <= a; i++)
    {
        sum += 5 * i;

        if (sum > rem)

            break;

        res = res+ 1;
    }
    printf("%d\n", res);
}