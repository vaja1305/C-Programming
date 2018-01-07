#include <stdio.h>
#include<math.h>
int main() 
{
    int n,a,b,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=pow(2,i);
        if(a>n)
        {
             b=i;
             break;
        }
    }
    c=pow(2,b);
    printf("%d",c);
    return 0;
}
