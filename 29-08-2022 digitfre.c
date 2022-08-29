#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char c[1023];
    scanf("%s",c);
    int i,deg[10]={0,0,0,0,0,0,0,0,0,0,0};
    int len=strlen(c);
    for(i=0;i<len;i++)
    {
        switch(c[i])
        {
            case '0':
            deg[0]++;
            break;
            case '1':
            deg[1]++;
            break;
            case '2':
            deg[2]++;
            break;
            case '3':
            deg[3]++;
            break;
            case '4':
            deg[4]++;
            break;
            case '5':
            deg[5]++;
            break;
            case '6':
            deg[6]++;
            break;
            case '7':
            deg[7]++;
            break;
            case '8':
            deg[8]++;
            break;
            case '9':
            deg[9]++;
            default :
            break;            
        }
    }
for(i=0;i<=9;i++)
{
    printf("%d ",deg[i]);
}
       
    return 0;
}
