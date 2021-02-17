
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
    int y;
    cin >> y;

    while (true)
    {
        y++;
        int a = y / 1000;
        int b = (y / 100) % 10;
        int c = (y / 10) % 10;
        int d = y % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }

    cout << y << endl;

    return 0;
}