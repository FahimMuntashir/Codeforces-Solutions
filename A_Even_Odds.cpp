
/*
*
* Author : Fahim Muntashir
* Handle: f12r
*
*/

#include <bits/stdc++.h>

using namespace std;

#define f12r ios_base::sync_with_stdio(false), cin.tie(NULL)
const double EPSILON = 1e-9;
#define MOD 1000000007
#define pi acos(-1)
#define ll long long
#define endl "\n"

/********** Main()  function **********/

int main()
{
    vector<ll> vec;
    f12r;
    ll n, k;
    cin >> n >> k;

    if (n % 2 == 0)
    {
        if ((n / 2) >= k)
        {
            cout << (k * 2) - 1 << endl;
        }
        else
            cout << (k - (n / 2)) * 2;
    }
    else
    {
        ll mid = (n / 2) + 1;
        if (k <= mid)
        {
            cout << k * 2 - 1;
        }
        else
        {
            cout << (k - mid) * 2;
        }
    }

    return 0;
}