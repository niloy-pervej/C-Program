#include<stdio.h>
int main()
{
    int i=1;
    niloy :
    printf("%d\n", i);
    i++;
    if(i<5)
    goto niloy;
    return 0;
}