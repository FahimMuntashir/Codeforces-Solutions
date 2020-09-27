#include <stdio.h>
#define ll long long int
int main()
{
    ll n;
    ll count_1 = 0, count_0 = 0, max_0 = -1;
    scanf("%lld", &n);
    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count_1++;
            if (count_0 > 0)
            {
                count_0--;
            }
        }
        if (arr[i] == 0)
        {
            count_0++;
            if (count_0 > max_0)
                max_0 = count_0;
        }
    }
    ll ans = count_1 + max_0;
    printf("%lld\n", ans);
}
