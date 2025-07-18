#include<stdio.h>
int main()
{ 
    int nn1,nn2,n1,n2,rem,gcd;
    printf("Enter two numbers:\n");
    scanf("%d%d", &nn1,&nn2);
    n1=nn1;
    n2=nn2;
    while(n2!=0)
   {
    rem = n1%n2;
    n1 = n2;
    n2 = rem;
   }
   gcd=n1;
   printf("GCD=%d\n", gcd);
   printf("LCM=%d", (nn1*nn2)/gcd);

    return 0;
}