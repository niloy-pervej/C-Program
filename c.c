#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        float r;
        scanf("%f",&r);
        printf("%4.f",r);
        float a=4*r*r;
        float ca= 3.1416*r*r;
        float ans= a-ca;
        printf("%.2f\n",ans);
    }
    return 0;
  
}
