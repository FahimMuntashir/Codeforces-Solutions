#include <stdio.h>
#include <stdlib.h>
// int Name(const void *pa, const void *pb){
//     const int *p1=pa;
//     const int *p2=pb;

//     return *p1 - *p2;
// }

int main()
{
   long int t;
    scanf("%ld", &t);

    while (t--)
    {
       long int n;
        scanf("%ld", &n);
       long int arr[n+1];
        for (long int i = 1; i <= n; i++)
        {
            scanf("%ld", &arr[i]);
        }

        // qsort(arr, n, sizeof(int), Name);

        // for (int  i = 0; i < n; i++)
        // {
        //      printf("%d ", arr[i]);
        // }

        // if (n>2)
        // {
        //     printf("YES\n");
        // }
        // else if(n<=2)
        // {
        //     printf("NO\n");
        // }
        int count = 0;

        for (long int i = 2; i <= n; i++)
        {
            if (arr[i] >= arr[i - 1] )
            {
                count=1;
                break;
            }
        }

        if (count==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
        
    }
}