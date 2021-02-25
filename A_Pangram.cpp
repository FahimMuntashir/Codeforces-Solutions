
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
    set<char> s;
    f12r;
    int n;
    cin >> n;

    string str;
    cin >> str;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        str[i] = tolower(str[i]);
        s.insert(str[i]);
    }

    if (s.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}