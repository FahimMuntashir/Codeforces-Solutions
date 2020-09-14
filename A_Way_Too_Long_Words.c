#include <stdio.h>
#include <string.h>

int main()
{
    int t, length;
    scanf("%d", &t);

    for(int i=0; i<=t; i++)
    {
        char str[100];

        gets(str);
        length = strlen(str);

        if (length <= 10)
        {
            printf("%s\n", str);
        }
        else
        {
            if (length > 10)
            {

                printf("%c%d%c\n", str[0] , (length - 2) , str[length-1]);
            }
        }
    }
}