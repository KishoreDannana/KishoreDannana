#include<stdio.h>
int main(void) 
{
int i,k,n,fac;
printf("enter number of elements ");
scanf("%d",&n);
int a[n];
printf("enter elements ");
for(i=0;i<n;i++)
{{}
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
fac=1;
k=a[i];
while(k>0)
{
fac=fac*k;
k--;
}
printf("%d factorial =%d\n",a[i],fac);
}
return 0;
}
