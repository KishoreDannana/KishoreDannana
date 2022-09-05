#include<stdio.h>
#include<conio.h>
void array();
int main()
{
int n,i=1;
scanf("%d",&n);
int x[n];
s:
if(i<=n)
{
scanf("%d",&x[i]);
i++;
goto s;
}
i=1;
array(n,x,i);
}
void array(int n,int x[],int i)
{
if(i<=n)
{
printf("%d ",x[i]);
i++;
array(n,x,i);
}
}
