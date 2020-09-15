#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000], t[1000];
    gets(s);
    gets(t);

    int len = strlen(s);

    strrev(s);

    if (strcmp(t, s) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}