#include <stdio.h>
#include <stdlib.h>

int holiday(const void *pa, const void *pb)
{
    const int *p1 = pa;
    const int *p2 = pb;

    return *p1 - *p2;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0, ans;
    qsort(arr, n, sizeof(int), holiday);

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    ans = arr[n - 1] * n - sum;

    printf("%d\n", ans);
}