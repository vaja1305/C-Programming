#include <stdio.h>
int main()
{
   int n=0,num,sum=0,rem=0;
   scanf("%d",&num);
   n=num;
   while(n!=0)
   {
       rem=n%10;
       sum=sum+(rem*rem*rem);
       n=n/10;
   }
   if(sum==num)
   {
       printf("armstrong");
   }
   else
   {
       printf("not an armstrong");
   }
   return 0;
}
