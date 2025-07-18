#include<stdio.h>
struct book
{
    char title[20];
    char auther[20];
    char publisher[20];
    int py;
    int nofpages;
    int price;
};
int main(){
    struct book b;
    scanf("%s%s%s%d%d%d",&b.title,&b.auther,&b.publisher,&b.py,&b.nofpages,&b.price);
    printf("Book Details:\nTitel:%s\nAuther:%s\nPublisher:%s\nPublishing year:%d\nNumber of pages:%d\nPrice:%d\n",b.title,b.auther,b.publisher,b.py,b.nofpages,b.price);
    return 0;

}