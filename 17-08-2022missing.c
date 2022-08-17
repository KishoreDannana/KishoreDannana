#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n-1;i++)
{
if((a[i]-1)!=a[i-1])
{
printf("%d",(a[i-1]+1));
}
}
return 0;
}
