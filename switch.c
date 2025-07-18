#include<stdio.h>
int main()
{
    int digit;
    printf("Enter a digit(o-3):\n");
    scanf("%d", &digit);
    switch(digit)
    {
    case 1:
    {
        printf("One");
        break;
    }
    case 2:
    {
        printf("Two");
        break;
    }
    case 3:
    {
        printf("Three");
        break;
    }
    default :
    printf("Not a digit");
    }


   return 0;
}