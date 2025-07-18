#include<stdio.h>
int main()
{
    int fibo[100],n,i;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    fibo[0]=0;fibo[1]=1;
    for(i=2;i<n;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
  }
  for(i=0;i<n;i++)
  printf("%d\n", fibo[i]);
  return 0;
}