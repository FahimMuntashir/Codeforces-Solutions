#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a, b, res=0;
    scanf("%d %d", &a, &b);

    for (int i = a - 1; i < b - 1; i++)
    {
        res += arr[i];
    }

    printf("%d\n", res);
}
