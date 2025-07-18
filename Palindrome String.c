#include<stdio.h>
#include<string.h>
int main()
{
  char s1[100],s2[100];
printf("Enter string 1:");
gets(s1);
int s1len= strlen(s1);
int j=0,i;
for(j=0,i=s1len-1;i>=0;j++,i--)
s2[j]=s1[i];
s2[j]=0;
printf("%s\n", s2);
int n=strcmp(s1,s2);
if(n==0)
printf("Palindrome");
else 
printf("Not palindrome");
return 0;
}