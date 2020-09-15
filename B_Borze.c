#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], ch;

    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '.')
        {
           printf("0");
           continue;
        }
       else if (str[i] == '-' && str[i + 1] == '.')
        {
            printf("1");
            i++;
            continue;
        }
       else if (str[i] == '-' && str[i + 1] == '-')
        {
            printf("2");
            i++;
            continue;
        }
    }

        printf("\n");
}