#include<stdio.h>

int main()
{
    int n, count =0, sum =0;
    scanf("%d", &n);

    while (n--)
    {
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);

        if (a==1)
        {
            count++;
        } 
        if (b==1)
        {
            count++;
        }
        if (c==1)
        {
            count++;
        }
        

        if (count>=2)
        {
            sum++;
        }
        count = 0;
        

    }

    printf("%d\n", sum);    
}