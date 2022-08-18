#include<stdio.h>
int main(void) 
{
int i,j,n,count=0;
printf("enter number of elements ");
scanf("%d",&n);
int a[n];
printf("enter elements ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]==a[j])
count++;
}
}
if(count==n)
printf("UNIQUE ");
else
printf("DUPLICATE");
return 0;
}
