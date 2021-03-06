
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
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        int n, k;
        cin >> n >> k;
        int cnt = 0;

        for (int i = 1; i <= n; i++)
        {
            sum += i;
            if (sum != k)
            {
                cnt++;
            }
        }
      
    }

    return 0;
}