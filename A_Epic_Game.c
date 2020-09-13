#include <stdio.h>
int gcd(int a, int b);

int main()
{

    int a, b, n;

    scanf("%d%d%d", &a, &b, &n);

    while (1)
    {
        n -= gcd(a, n);
        if (n == 0 && gcd(a, n) == a)
        {
            printf("0\n");
            break;
        }
        n -= gcd(b, n);
        if (n == 0 && gcd(b, n) == b)
        {
            printf("1\n");
            break;
        }
    }
}

int gcd(int a, int b)
{
    int rem;
    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}