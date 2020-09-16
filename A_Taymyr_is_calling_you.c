#include <stdio.h>

int main()
{
    int m, n, z;
    scanf("%d%d%d", &m, &n, &z);
    int count = 0;
    for (int i = m; i <= z; i += m)
        for (int j = n; j <= i; j += n)
            if (i == j)
                count++;

                printf("%d\n", count);
}