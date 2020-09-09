#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


int main()
{

    string str;
    int count =0;
    cin>>str;
    sort(str.begin(), str.end());

    for(int i=0; i<str.size(); i++){
        if (str[i]!=str[i+1])
        {
            count++;
        }
        
    }

    if (count%2==0)
    {
        cout<<"CHAT WITH HER!";

    }else
    {
        cout<<"IGNORE HIM!";
    }
    
    
    
}