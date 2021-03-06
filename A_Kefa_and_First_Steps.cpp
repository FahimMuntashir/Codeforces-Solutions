
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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 1;
    int mxx = 1;
    for (int i = 0; i < n - 1; i++)
    {   
        if (arr[i + 1] >= arr[i])
        {
            count++;
            if (count > mxx)
            {
                mxx = count;
            }
        }
        else
            count = 1;
    }

    cout << mxx << endl;

    return 0;
}