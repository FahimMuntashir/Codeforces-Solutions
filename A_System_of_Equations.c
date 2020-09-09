#include<stdio.h>

int main()
{
    int m,n;
    scanf("%d %d", &n, &m);

    int eq1, eq2, sum, count=0;

    sum = n+m;
    for (int a = 0; a < sum; a++)
    {
        for (int b=0; b<sum; b++)
        {
            eq1 = (a*a) +b;
            eq2 = a+ (b*b);

            if (eq1==n && eq2==m)
            {
                count++;
            }
            
        }

            
    }

        printf("%d\n", count);

    

}