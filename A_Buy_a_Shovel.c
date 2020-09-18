#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int k,r;
    scanf("%d%d", &k, &r);

    int sum = 0;

    for (int i = 1;; i++)
    {
        sum+=k;
        if ((sum%10==0) || (sum%10==r))
        {
            printf("%d\n", i);
            break;

        }else
        {
            continue;
        }
        
        
    }
    


    return 0;
}