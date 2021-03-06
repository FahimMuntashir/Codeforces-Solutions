
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
    int n,m;
    cin>>n>>m;
    int puzz[m];
    int max = -1;
    int min  = 2648;
    for (int i = 0; i < m; i++)
    {
        cin>>puzz[i];
    }

    sort(puzz, puzz+n);
    
    for (int i = 0; i < n; i++)
    {
        if (puzz[i]>max)
        {
            max=puzz[i];
        }
        if (puzz[i]<min)
        {
            min= puzz[i];
        }
        
        
    }

    cout<<max-min<<endl;
    
 
    return 0;
}