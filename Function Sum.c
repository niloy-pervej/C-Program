#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main()
{
    int x,y,su;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);
    su = sum(x,y);
    printf("Sum = %d", su);
}