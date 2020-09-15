#include <stdio.h>
#include<math.h>
int main()
{
    int n;

    scanf("%d", &n);

    int var = 8*n+1;
    int fix = sqrt(var)-1;
    fix = fix /2;
    fix*=(fix+1);
	fix/=2;
   
        

        if (fix == n )
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    
}
