
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
    // int arr[n];
    double sum = 0;
    int temp = n;
    while (n--)
    {
        int t;
        cin >> t;
        sum += t;
    }
    double ans = (sum / 100) / temp;

    cout << fixed << setprecision(12) << ans * 100 << endl;

    return 0;
}