#include<stdio.h>
int main()
{
    int a[5],sum=0;
    for(int i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
     for(int i=0;i<5;i++){
      sum=sum+a[i];
    }
    printf("Sum is = %d", sum);
    return 0;
}