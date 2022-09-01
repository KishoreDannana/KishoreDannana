#include<stdio.h>
int fact(int x)
{
int r=1;
while(x>0)
{
r=r*x;
x--;
}
return r;
}
int main() 
{
int a;
scanf("%d",&a);
int k=fact(a);
printf("%d",k);
}
