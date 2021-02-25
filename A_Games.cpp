
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
    vector<int> x;
    vector<int> y;
    f12r;
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }

    // sort(vec.begin(), vec.end());
    int count = 0;
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < y.size(); j++)
        {
            if (x[i] == y[j])
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}