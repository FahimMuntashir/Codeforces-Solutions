
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
    vector<int> vec;
    f12r;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vec.push_back(n);
    }

    int count = 1;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] != vec[i + 1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}