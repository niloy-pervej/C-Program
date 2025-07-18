#include<stdio.h>
int main()
{
    int a[20],n,max,i;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    max = a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("Max = %d", max);
    return 0;
}