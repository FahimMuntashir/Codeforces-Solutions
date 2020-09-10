#include<stdio.h>
#include<stdlib.h>
int horse(const void *pa, const void *pb)
{
    const int *p1 = pa;
    const int *p2 = pb;

    return *p1 - *p2;
}

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int t;
        scanf("%d", &t);

        
            int arr[t];

            for (int i = 0; i < t; i++)
            {
             
                scanf("%d", &arr[i]);
            }

               qsort(arr, t, sizeof(int), horse);

               int count =0;

               for (int i = 1; i < t; i++)
               {
                   if (arr[i]-arr[i-1]>1)
                   {
                       count=1;

                       break;
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
    
}