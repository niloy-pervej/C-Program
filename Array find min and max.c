#include <stdio.h>
int main()
{
    int a[10], max,min, i = 0;
    for (i = 0; i <= 4; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 1; i <= 4; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    min=a[0];
    for(i=1;i<=4;i++){
        if(a[i]<min)
        min = a[i];
    }
    printf("Maximum number is = %d\n", max);
    printf("Minimum number is = %d\n", min);
    return 0;
}