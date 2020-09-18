#include<stdio.h>
#include<string.h>


int main()
{
    int n;
    scanf("%d", &n);
    char str[n];

    // gets(str);
    scanf("%s", str);
    int count =0, flag= 0;
    // int length = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i]=='A')
        {
            count++;
        }
        if (str[i]=='D')
        {
            flag++;
        }
        
        
    }

    if (count>flag)
    {
        printf("Anton\n");
    }
    else if (flag> count)
    {
        printf("Danik\n");
    }else if(flag==count)
    {
        printf("Friendship\n");
    }
    
    
    
    
}