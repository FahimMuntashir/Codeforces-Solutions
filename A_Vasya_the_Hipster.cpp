
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
    int a, b;
    cin >> a >> b;

    int day = min(a, b);

    int rem = abs(a - b);
    int count = 0;

    while (rem > 1)
    {

        count++;
        rem = rem - 2;
    }
    cout << day << " " << count << endl;

    return 0;
}