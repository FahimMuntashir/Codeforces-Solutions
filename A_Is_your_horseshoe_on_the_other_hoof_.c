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
   int arr[4];
   int count=0;

   for (int i = 0; i < 4; i++)
   {
       scanf("%d", &arr[i]);
   }

   qsort(arr, 4, sizeof(int), horse);


    for (int i = 0; i < 3; i++)
    {
        if (arr[i]==arr[i+1])
        {
            count++;
        }
        
    }


    printf("%d\n", count);
    
   
   

   
    

}