
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
    f12r;
    int k, r;
    cin >> k >> r;

    int count = 0;

    while (true)
    {
        count++;

        int ans = count * k;

        if (ans % 10 == 0 || ans % 10 == r)
        {
            cout << count << endl;
            break;
        }
        continue;
    }

    return 0;
}