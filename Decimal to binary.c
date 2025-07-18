#include <stdio.h>
int main()
{
    int i, n;
    int b[20];
    scanf("%d", &n);
    i = 0;
    while (n > 0)
    {
        b[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", b[i]);
    }
    printf("\n");
    return 0;
}