#include <stdio.h>
#include <string.h>
struct person
{
    char pname[20];
    int pno;
    float salary;
};
int main()
{
    struct person p[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        gets(p[i].pname);
        fflush(stdin);
        scanf("%d\n", &p[i].pno);
        scanf("%f\n", &p[i].salary);
    }
    for (i = 0; i < 3; i++)
    {
        printf("Name = %s\n", p[i].pname);
        printf("Person No. = %d\n", p[i].pno);
        printf("Person Salary = %f\n", p[i].salary);
    }
    return 0;
};