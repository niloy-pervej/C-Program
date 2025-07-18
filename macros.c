#define ACCEPT printf("Enter two number:\n");scanf("%d%d", &a,&b)
#include<stdio.h>
int main()
{
    int a,b;
    ACCEPT;
    
    printf("a = %d\nb = %d", a,b);
    return 0;
}