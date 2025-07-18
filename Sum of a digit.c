#include<stdio.h>
int main()
{
    int number,temp,rem,sum=0;
    printf("Enter any number:\n");
    scanf("%d", &number);
    temp=number;
    while(temp!=0){
    rem=temp%10;
    sum=sum+rem;
    temp=temp/10;
    }
    printf("Sum is = %d", sum);


    return 0;
}