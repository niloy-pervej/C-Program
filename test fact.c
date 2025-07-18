
#include<stdio.h>
int fact(int n);
int main()
{
    int n,result;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    result = fact(n);
    printf("Factorial = %d", result);
    return 0;

}
int fact(int n)
{
  if(n==0 || n==1)
  return 1;
  else
  return n*fact(n-1);
}