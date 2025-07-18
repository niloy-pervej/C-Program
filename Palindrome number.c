#include<stdio.h>
int main()
{
    int number,temp,rem,sum=0;
    printf("Enter any number:\n");
    scanf("%d", &number);
    temp=number;
    while(temp!=0){
    rem=temp%10;
    sum=sum*10+rem;
    temp=temp/10;
    }
   if(sum==number)
   printf("%d is a palindrome number\n",number);
   else
   printf("%d is not a palindrome number\n",number);

    return 0;
}