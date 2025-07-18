#include <stdio.h>
int main()
{
    int array[10], temp;
    printf("Enter array element:\n");
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Unsorted array:\n");
    for (int i = 0; i <= 4; i++)
    {
        printf(" %d ", array[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        for (int j = i+1; j <= 4; j++)
        {
            if (array[i] > array[j])
            {
               temp=array[j];
               array[j]=array[i];
               array[i]=temp;
            }
        }
    }
    printf("\nSorted array:\n");
    for (int i = 0; i <= 4; i++)
    {
        printf(" %d ", array[i]);
    }
    return 0;
}