
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
    string str;
    cin >> str;
    int low = 0, up = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            low++;
        }
        else
        {
            up++;
        }
    }

    if (low > up)
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i]= tolower(str[i]);
        }
        cout<<str<<endl;
    }
    else if (low < up)
    {
        for (int i = 0; i < str.size(); i++)
        {
           str[i]= toupper(str[i]);
        }
        cout<<str<<endl;
    }
    else
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i]= tolower(str[i]);
        }
        cout<<str<<endl;
    }

    return 0;
}