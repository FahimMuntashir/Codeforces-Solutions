#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    gets(str);

    int count = 0;

    for (int  i = 0; i < strlen(str); i++)
    {
        if (str[i]=='4' || str[i]== '7')
        {
            count ++;
        }
        
    }

    if (count==4 || count==7)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    
    
    
    
    
    
    
    
    
}