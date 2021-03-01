
/*
*
* Author : Fahim Muntashir
* Handle: f12r
*
*/

#include <bits/stdc++.h>

using namespace std;

#define f12r ios_base::sync_with_stdio(false), cin.tie(NULL)
const double eps = 1e-9;
#define MOD 1000000007
#define pi acos(-1)
#define ll long long
#define endl "\n"

/********** Main()  function **********/
const ll N = 1e6;
bool isPrime[N + 5];

void sieve()
{
    for (int i = 0; i < N; i++)
    {
        isPrime[i] = true;
    }

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
            for (int j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
    }
}

int main()
{
    sieve();
    f12r;

    ll n;
    cin >> n;

    if (n % 2 == 0)
    {
        ll a = n / 2;
        ll b = n / 2;
        while (isPrime[a] || isPrime[b])
        {
            a--;
            b++;
        }

        cout << a << " " << b;
    }
    else
    {
        ll a = n / 2;
        ll b = n / 2 + 1;
        while (isPrime[a] || isPrime[b])
        {
            a--;
            b++;
        }

        cout << a << " " << b;
    }

    return 0;
}