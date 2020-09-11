#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j]==i)
            {
                printf("%d ", j+1);
            }
            
        }
        
    }
    
    
}