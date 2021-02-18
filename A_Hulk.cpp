
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
    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            cout << "I hate that ";
        }
        else 
        {
            cout << "I love that ";
        }
    }

    if (n % 2 != 0)
    {
        cout << "I hate it";
    }
    else
    {
        cout << "I love it";
    }

    return 0;
}