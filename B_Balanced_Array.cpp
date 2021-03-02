
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
    int t;
    cin >> t;
    while (t--)
    {
        int even = 0, odd = 0;
        vector<int> vec;
        int n;
        cin >> n;
        if (n % 4 == 0)
        {

            cout << "YES" << endl;
            // vec.push_back(2);

            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    vec.push_back(i);
                    even += i;
                }
            }

            for (int i = 1; i <= n; i++)
            {
                if (i % 2 != 0)
                {
                    vec.push_back(i);
                    odd += i;
                }
            }

            int x = even - odd;
            int back = vec.back();
            // cout<<back<<endl;
            vec.back() = back + x;

            for (int i = 0; i < vec.size(); i++)
            {
                cout << vec[i] << " ";
            }

            cout << endl;
        }
        else
            cout << "NO" << endl;

        vec.clear();
    }

    return 0;
}