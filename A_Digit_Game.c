#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PI 3.1416
int holiday(const void *pa, const void *pb)
{
    const int *p1 = pa;
    const int *p2 = pb;

    return *p2 - *p1;
}
int main()
{   

    int t;
    scanf("%d", &t);
    int arr[t*2];

    for (int i = 0; i < t*2; i++)
    {
        scanf("%d", &arr[i]);
    }

    // int n;
    // scanf("%d", &n);
    // int arr2[n];

    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr2[i]);
    // }

        qsort(arr, t*2, sizeof(int), holiday);


 for (int i = 1; i < t+1; i++)
 {
     if (arr[i+1]%2==0)  
     {
         printf("2\n");
     }else
     {
         printf("1\n");
     }
     
     
 }
 
    
    
    


    return 0;
}