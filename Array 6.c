#include <stdio.h>
int main()
{
    int a[10];
    for (int i = 0; i <= 4; i++)
    {
        printf("Number %d = ", i + 1);
        scanf("%d", &a[i]);
    }
    return 0;
}