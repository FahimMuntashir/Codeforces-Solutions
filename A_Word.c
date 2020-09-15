#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[1000];

        gets(str);
        int len = strlen(str);
        int upper =0, lower=0;

    for (int i = 0; i < len; i++)
    {
        if (isupper(str[i]))
        {
            upper++;
        }
        else
        {
            lower++;
        }
        
    }

    if (upper>lower)
    {
        for (int i = 0; i < len; i++)
        {
            str[i]= toupper(str[i]);
        }
        
        printf("%s\n", str);
    }
    else if (lower>upper)
    {
        for (int i = 0; i < len; i++)
        {
            str[i]= tolower(str[i]);
        }
        
        printf("%s\n", str);
    }else
    {
        for (int i = 0; i < len; i++)
        {
            str[i] = tolower(str[i]);
        }
        
        printf("%s\n", (str));
    }
    
    
    
    
    
}