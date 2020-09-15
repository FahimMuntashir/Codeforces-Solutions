#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    int y,w;
    
    string str[6] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    cin>>y>>w;
     y = max(y,w);

     cout<< str[6-y];
}