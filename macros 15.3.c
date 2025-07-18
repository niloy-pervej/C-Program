#define INCREMENT(x) if(x>0) x++
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    INCREMENT(a);
    printf("%d", a);
    return 0;
}