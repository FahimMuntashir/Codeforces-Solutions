#include <stdio.h>

int main()

{
    unsigned char ch, ch1;
    printf("Enter a lowercase:");
    scanf("%c", &ch);

    ch1 = ch - 32;
    printf("\nThe uppercase    :%c", ch1);

    int ans1 = ch & 128;
    int ans2 = ch & 64;
    int ans3 = ch & 32;
    int ans4 = ch & 16;
    int ans5 = ch & 8;
    int ans6 = ch & 4;
    int ans7 = ch & 2;
    int ans8 = ch & 1;

    printf("\nThe equivalent binary of %c is %d%d%d%d%d%d%d%d\n", ch, ans1 >> 7, ans2 >> 6, ans3 >> 5, ans4 >> 4, ans5 >> 3, ans6 >> 2, ans7 >> 1, ans8);

    return 0;
}