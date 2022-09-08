#include<stdio.h>
void josephus(int n, int k);
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);

    //int s=josephus(n,k);
  //  printf("%d",n);
    return 0;
}
void josephus(int n, int k)
{
    
 int a[n],i,j,c=0,d=n;
 for(i=0;i<d;i++)
 {
     a[i]=i+1;
 }

 for(i=0;i<d;i++)
 {
     c++;
     if(d==1)
     {
         //return (a[n]);
        printf("%d",a[i]);
        d=0;
         break;
     }
   if(c==k)
     {
         c=0;
         for(j=i;j<d;j++)
         {
             a[j]=a[j+1];
         }
         d--;
     }
     
 }
}
