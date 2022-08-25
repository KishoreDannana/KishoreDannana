#include<stdio.h>
int main(void) 
{
char a[50];
int c=0,i;
scanf("%[^\n]s",a);
for(i=0;i<50;i++)
{
if(a[i]==' ')
c++;
}
printf("no of words :%d",c);
return 0;
}
