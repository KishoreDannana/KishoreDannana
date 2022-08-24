#include<stdio.h>
int main(void) 
{
int i,j,k=1,s,n;
printf("enter n value ");
scanf("%d",&n);
s=n;
for(i=1;i<=n;i++)
{
s=n;
for(j=1;j<=k;j++)
{
printf("%d",s);
s--;
}
k++;
printf("\n");
}
return 0;
}
