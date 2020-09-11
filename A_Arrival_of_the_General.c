#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int res;

    for (int  i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);



    }

    int max = 0, min=101, maxI, minI;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
            maxI =i;
        }
        if (arr[i]<=min)
        {
            min = arr[i];
            minI = i;
        }
        
        
    }

    if (maxI>minI)
    {
        minI++;
    }
     res=  maxI+(n-1)-minI;
    printf("%d\n",res );
    
    


    
}