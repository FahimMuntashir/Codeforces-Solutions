#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int sum = 0, k = 0;

    while (t--)
    {
        int a, b;
        scanf("%d%d", &a, &b);

        sum = (a + k) - b;

        if (sum < 0)
        {
            k = 0;
        }
        else
        {
            k = sum;
        }
    }

    printf("%d\n", sum);
}