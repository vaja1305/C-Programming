#include <stdio.h>
int main()
{
   int a=34,b=44,c=87;
   if(a>b && a>c)
   {
       printf("%d\n",a);
   }
   else if(b>c && b>a)
   {
       printf("%d\n",b);
   }
   else
   {
       printf("%d\n",c);
   }
   return 0;
}
