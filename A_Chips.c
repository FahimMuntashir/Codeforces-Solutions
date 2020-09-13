#include<stdio.h>

int main()
{
      int n, m,temp;
    scanf("%d%d", &n,&m);

        temp = (n * (n + 1) / 2);
      m %= temp;
    for (int i = 1; i <= n; ++i)
    {
        if (m < i)
        {
            break;
        }
        m -= i;
    }
    printf("%d\n", m);
}