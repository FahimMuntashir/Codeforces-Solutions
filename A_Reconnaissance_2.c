#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#define INT_MAX 2147483647
int  main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX;
    int a, b = -1;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            if (abs(arr[i] - arr[0]) < min)
            {
                min = abs(arr[i] - arr[0]);
                a = i + 1;
                b = 1;
            }
        }
        else
        {
            if (abs(arr[i] - arr[i + 1]) < min)
            {
                min = abs(arr[i] - arr[i + 1]);
                a = i + 1;
                b = i + 2;
            }
        }
    }
    printf("%d %d\n", a,b);
    
}