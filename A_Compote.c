#include <stdio.h>

int main()
{
    int a, b, c, res;
    scanf("%d%d%d", &a, &b, &c);

    a++;
    while (a-- > 0)
    {
        if (b >= a * 2 && c >= a * 4)
        {
            break;
        }
    }
    res = a + a * 2 + a * 4;
    printf("%d\n", res);
}