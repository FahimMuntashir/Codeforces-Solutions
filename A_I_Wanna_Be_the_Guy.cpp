
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
		set<int>s;
		
		int t;
		cin>>t;
		
		int p;
		cin>>p;
		int prr[p];
		for(int i=0; i<p;i++){
			cin>>prr[i];
			s.insert(prr[i]);
		}
		
		int q;
		cin>>q;
		int qrr[q];
		
		
		 for(int i=0; i<q;i++){
			cin>>qrr[i];
			s.insert(qrr[i]);
		}
		
		int len = s.size();
		
		if(len==t){
			  cout << "I become the guy." << endl;
	}
		else        
			cout << "Oh, my keyboard!" << endl;
 
		
		return 0;
	}