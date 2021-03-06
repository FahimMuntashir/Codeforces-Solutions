
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
    vector<int> vec;
    f12r;
    ll n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            vec.push_back(i);
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            vec.push_back(i);
        }
    }

    int ans = vec[k+1];

    cout<<ans<<endl;

    return 0;
}