#include <stdio.h>
int main()
{
    char n[100];
    char n2[100];
    gets(n);
    int strlen = 0, i = 0, j;
    while (n[i] != '\0')
    {
        i++;
        strlen++;
    }
    for (j = 0, i = strlen - 1; i >= 0; j++, i--)
    {
        n2[j] = n[i];
    }
    n2[j]='\0';
    printf("%s\n", n);
    printf("%s", n2);
    return 0;
}