
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
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 4 == 2)
            {
                if (j == m)
                {
                    cout << '#';
                }
                else
                    cout << '.';
            }

            else if (i % 4 == 0)
            {
                if (j == 1)
                {
                    cout << '#';
                }
                else
                    cout << '.';
            }

            else
            {
                cout << '#';
            }
        }

        cout << endl;
    }

    return 0;
}