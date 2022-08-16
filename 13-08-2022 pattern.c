#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n;
  char c='A',c1='a';
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%2c%2c",c,=c1);
      c++;
      c1++;
    }
    printf("\n");
  }
  getch();
}
    
