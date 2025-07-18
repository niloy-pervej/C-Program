#include<stdio.h>
int main()
{
   int n,k;
   for(n=1;n<=100;n++){
    k=1;
   if(n<=1)
    k=0;
   else {
   for(int i=2;i<=n/2;i++){
    if(n%i==0){
    k=0;
    break;
   }
   }
   }
    if(k==1)
    printf("%d\n", n);
   }
    return 0;
   }