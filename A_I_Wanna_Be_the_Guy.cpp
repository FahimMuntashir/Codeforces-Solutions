
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
    set<int> s;
    f12r;
    int n;
    cin >> n;

    int p,q;
    cin>>p>>q;

    while (p--)
    {
        int t;
        cin>>t;
        s.insert(t);
    }
    while (q--)
    {
        int t;
        cin>>t;
        s.insert(t);
    }
    
    

    // int p;
    // cin >> p;
    // int prr[p];
    // int count = 0;
    // for (int i = 0; i < p; i++)
    // {
    //     s.insert(prr[i]);
    // }

    // int q;
    // cin >> q;
    // int qrr[q];

    // for (int i = 0; i < q; i++)
    // {
    //     s.insert(qrr[i]);
    // }

    // for(int x:s){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // cout<<s.size();
    if (s.size()==4)
    {
        cout<<"I become the guy."<<endl;
    }else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    
    

    return 0;
}