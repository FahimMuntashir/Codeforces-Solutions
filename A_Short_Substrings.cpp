
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
    // set<string> se;
    f12r;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string temp;
        if (s.length() == 2)
        {
            cout << s << endl;
        }
        else
        {
            temp += s[0];
            temp += s[1];

            for (int i = 3; i < s.size(); i += 2)
            {
                temp += s[i];
            }

            cout << temp << endl;
        }
    }

    return 0;
}