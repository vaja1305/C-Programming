#include<stdio.h>           //bitwise operators
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a=a^b;                                  // n1=n1+n2;
    b=a^b;                                   // n2=n1-n2;
    a=a^b;                                    // n1=n1-n2;
    printf("a:%d\nb:%d",a,b);
    return 0;
}
