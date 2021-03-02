
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
    int n;
    cin>>n;
    int arr[n];
    int count =0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
        
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==-1)
            {
                count++;
            }else
            {
                count--;
            }
            
            
        }

        cout<<count<<endl;
        
 
    return 0;
}