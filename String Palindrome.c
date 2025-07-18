#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char str2[100];
    printf("Enter a string:");
    gets(str);
    int strlen = 0, i = 0, j;
    while (str[i] != '\0')
    {
        i++;
        strlen++;
    }
    for (j = 0, i = strlen - 1; i >= 0; i--, j++)
    {
        str2[j] = str[i];
    }
    str2[j] = '\0';
    printf("str= %s\n", str);
    printf("str2= %s\n", str2);
    int c = strcmp(str, str2);
    if (c == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
    return 0;
}