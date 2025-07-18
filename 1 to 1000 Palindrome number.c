#include<stdio.h>
int main()
{   
    int number;
    for(number=1;number<=1000;number++){
    int n,rem,sum=0;
    n=number;
    while(n!=0){
    rem=n%10;
    sum=sum+rem*rem*rem;
    n=n/10;    }
    if(sum==number)
    printf("%d\n",sum);
    }
    return 0;
}