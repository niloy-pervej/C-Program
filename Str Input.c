#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    printf("%s", str);
    return 0;
}