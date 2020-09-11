#include <stdio.h>
#include<stdlib.h>
// int small(int num1, int num2, int num3);
int min(int num1, int num2);

int main()
{
    int n, k, l, c, d, p, nl, np;
    // int min;
    scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int drink, toast, lime, salt, ans;

    drink = (k * l);
    toast = drink / nl;
    lime = c * d;
    salt = p / np;
    ans = min(lime, salt);
    ans = min(ans, toast);
    ans/=n;
    printf("%d\n", ans);
}

int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}

// int small(int num1, int num2, int num3)
// {
//     if (num1 < num2)
//     {
//         if (num1 < num3)
//         {
//             return num1;
//         }
//         else
//         {
//             return num3;
//         }
//     }
//     else
//     {
//         if (num2 < num3)
//         {
//             return num2;
//         }
//         else
//         {
//             return num3;
//         }
//     }
// }