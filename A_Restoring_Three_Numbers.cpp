
/*
*
* Author : Fahim Muntashir
* Handle: f12r
*
*/

#include <bits/stdc++.h>

using namespace std;

#define f12r ios_base::sync_with_stdio(false), cin.tie(NULL)
const double eps = 1e-9;
#define MOD 1000000007
#define pi acos(-1)
#define ll long long
#define endl "\n"

/********** Main()  function **********/

int main()
{
    f12r;
    ll arr[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 4);
    ll x, y, z;
    for (int i = 0; i < 4; i++)
    {
        // z = arr[3] - arr[0];
        // x = arr[1] - z;
        // y = arr[3] - arr[1];

        x= arr[3]-arr[2];
        y= arr[3]-arr[1];
        z= arr[3]-arr[0];
    }

    cout << x << " " << y << " " << z;

    return 0;
}