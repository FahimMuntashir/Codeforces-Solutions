
/*
*
* Author : Fahim Muntashir
* Handle: f12r
*
*/

#include<bits/stdc++.h>
 
using namespace std;

#define f12r ios_base::sync_with_stdio(false), cin.tie(NULL)
const double eps = 1e-9;
#define MOD     1000000007
#define pi acos(-1)
#define ll long long
#define endl "\n"


/********** Main()  function **********/

int main()
{
    f12r;      
    ll k,n,w;
    cin>>k>>n>>w;

    int cost =0;

    for (int i = 1; i <=w; i++)
    {
        cost+= (i*k);
    }

    if (cost>n)
    {
        cout<<cost-n;
    }else
    {
        cout<<0<<endl;
    }
    
    
    
 
    return 0;
}