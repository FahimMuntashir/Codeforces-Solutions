#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,str2;

    cin>>str;
    cin>>str2;
    // int len = strlen(str);
    for (int i = 0; i <str.size(); i++)
    {
        if (str[i]==str2[i])
        {
            cout<<"0";
        }else
        {
            cout<<"1";
        }
        
        
    }
    
    
}