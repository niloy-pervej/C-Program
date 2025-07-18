#include<stdio.h>
int main()
{
    FILE *f1,*f2;
    char c;
    f1=fopen("Niloy.txt","r");
    if(f1==NULL){
        printf("Error opening the source file\n");
        return 1;
    }
    f2=fopen("Destination.txt","w");
    if(f2==NULL){
        printf("Error opening the destination file\n");
        return 1;
    }
    while((c=fgetc(f1))!=EOF){
        fputc(c,f2);
    }
    printf("File succesfully copied\n");
    fclose(f1);
    fclose(f2);
}