
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
    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < s.length() ; i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i]=='9')
        {

            cout << "YES" << endl;
            return 0;
        }
        // else if (s[i + 1] == '9' || s[i + 1] == '+')
        // {
        //     cout << "YES" << endl;
        //     return 0;
        // }
    }

    cout << "NO" << endl;

    return 0;
}