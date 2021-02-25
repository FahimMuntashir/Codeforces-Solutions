
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
    ll n;
    cin >> n;
    int count = 0;
    string s;

    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        if (s == "Icosahedron")
        {
            count += 20;
        }
        else if (s == "Dodecahedron")
        {
            count += 12;
        }
        else if (s == "Octahedron")
        {
            count += 8;
        }
        else if (s == "Cube")
        {
            count += 6;
        }
        else if (s == "Tetrahedron")
        {
            count += 4;
        }
    }
    cout << count << endl;

    return 0;
}

// if (arr[i] == "Icosahedron")
//         {
//             count += 20;
//         }
//         else if (arr[i] == "Dodecahedron")
//         {
//             count += 12;
//         }
//         else if (arr[i] == "Octahedron")
//         {
//             count += 8;
//         }
//         else if (arr[i] == "Cube")
//         {
//             count += 6;
//         }
//         else if (arr[i] == "Tetrahedron")
//         {
//             count += 4;
//         }