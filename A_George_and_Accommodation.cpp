
/*
*
* Author : Fahim Muntashir
* Handle: f12r
*
*/

#include <bits/stdc++.h>
#include <iostream>
#include <string>

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
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        int p, q;
        cin >> p >> q;
        if (abs(p - q) >= 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}