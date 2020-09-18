#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PI 3.1416

int main()
{
    char str[101];
    scanf("%s", str);

    int length = strlen(str);
    int diff, count =0, flag=97;
    for (int i = 0; i < length; i++)
    {
            diff = abs(flag- str[i]);

            if (diff>13)
            {
                diff = (26 - diff);
            }
            count = count + diff;
            flag = str[i];            
    }

    printf("%d\n", count);
    

    return 0;
}