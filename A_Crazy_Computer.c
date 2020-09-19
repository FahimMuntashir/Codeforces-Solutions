#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PI 3.1416

int main()
{
    int n,c;

    scanf("%d%d", &n, &c);

    int arr[n];

    for (int  i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i+1]-arr[i]>c)
        {
            count =0;
        }
        else 
        {
            count++;
        }
        
        
    }

    printf("%d\n", count+1);
    
    
    return 0;
}