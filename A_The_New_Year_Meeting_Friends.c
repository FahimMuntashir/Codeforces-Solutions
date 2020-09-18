#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PI 3.1416


int newYear(const void *pa, const void *pb){

    const int *p1 = pa;
    const int *p2 = pb;

    return *p1 - *p2;
}

int main()
{
    int arr[3];
    int ans;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, 3, sizeof(int), newYear);

    ans = arr[2] - arr[0];

    printf("%d\n", ans);
    

    return 0;
}