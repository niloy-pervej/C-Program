#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N:\n");
    scanf("%d", &n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("N");
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=row;col>=1;col--){
            printf("N");
        }
        printf("\n");
    }

    return 0;
}