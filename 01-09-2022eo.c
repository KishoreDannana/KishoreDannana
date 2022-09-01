#include<stdio.h>
#include<string.h>
int eo(int x)
{
if(x%2==0)
return 1;
else 
return 0;
}
int main() 
{
int a;
scanf("%d",&a);
int b=eo(a);
if(b==1)
printf("even");
else
printf("odd");
return 0;
}
