#include<stdio.h>

int main()
{
    int m,n;
    scanf("%d%d", &m, &n);
    int count = 0;

    for (int i = 2; i <n; i++)
    {
        if (i%n==0)
        {
            count ++;
        }
        
        
    }
    if (count==0)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    
    
    
}