
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
    set<char> ch;
    f12r;
    string s;
    // cin>>s;
    getline(cin, s);

    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            ch.insert(s[i]);
        }
    }

    cout << ch.size() << endl;

    return 0;
}