#include<stdio.h>
#include<conio.h>
int main()
{
int f1=0,f2=1,i;
printf("%d %d",f1,f2);
int a[20];
for(i=0;i<20;i++)
{
a[i]=f1+f2;
f1=f2;
f2=a[i];
if(a[i]<100)
{
printf(" %d",a[i]);
}
else
{
break;
}
}
return 0;
}
