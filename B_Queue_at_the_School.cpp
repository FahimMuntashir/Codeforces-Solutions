
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
    int n,t;
    cin>>n>>t;

    string s;
    cin>>s;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
                if (s[j]=='B' && s[j+1]=='G')
                {
                    s[j] = 'G';
                    s[j+1] = 'B';
                    j++;
                }
                
        }
        
    }

    cout<<s<<endl;
    
    
    return 0;
}