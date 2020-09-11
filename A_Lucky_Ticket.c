#include <stdio.h>
#include <string.h>
int main()
{
    int n, len, sum1=0, sum2=0;
    scanf("%d", &n);

    char str[n];

    for (int i = 0; i < n; i++)
    {
        if (str[i] != '4' && str[i] != '7')
        {
            printf("NO\n");
            return 0;
        }
        else
        {
            if (i < n / 2)
            {
                sum1 += str[i] ;
            }
            else
            {
                sum2 += str[i] ;
            }
        }
    }
    if(sum1==sum2)
        printf("YES\n");
    else
        printf("NO\n");

        return 0;
}