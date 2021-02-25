
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
    int arr[5] = {1, 5, 10, 20, 100};

    ll n;
    cin>>n;
    int count =0;
    for (int i = 4; i >=0 ; i--)
    {
      if (n>=arr[i])
      {
          
          count++;
      }
      n=n/arr[i];
      
        
    }

    cout<<count<<endl;
    

    return 0;
}