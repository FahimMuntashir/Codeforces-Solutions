
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
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count =0;

        for (int j = 1; j < 2; j++)
        {
            for (int i = 0; i < n-1; i++)
            {
                if (arr[i]<arr[i+1] && (arr[i]&&arr[i+1]!=0))
                {
                    arr[i]= arr[i+1];
                    arr[i+1]=arr[i];
                }
                
            }
            
        }
        
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
                cout<<"yes"<<endl;
                break;
            }else
            {
                cout<<"no"<<endl;
                break;
            }
            
            
        }
        
        
        
    }

    return 0;
}