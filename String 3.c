#include<stdio.h>
int main()
{
    int a;
    float f;
    char c;
    char s[100];
    scanf("%d", &a);
    scanf("%f", &f);
    scanf(" %c", &c);
    getchar();
    gets(s);
    printf("a = %d\n", a);
    printf("f = %f\n", f);
    printf("c = %c\n", c);
    printf("str = %s\n", s);
    return 0;
}