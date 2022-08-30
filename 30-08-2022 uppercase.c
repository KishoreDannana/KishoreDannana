#include<stdio.h>
#include<string.h>
int main() 
{
char a[30];
scanf("%s",a);
int l=strlen(a);
for(int i=0;i<l;i++)
{
if(a[i]=='a')
{
printf("A");
}
else
{
printf("%c",a[i]);
}}
return 0;
}
