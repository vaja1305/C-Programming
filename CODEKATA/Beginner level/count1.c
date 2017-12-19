#include <stdio.h>
int main()
{
  int num,n=0,i;
  int count=0,d;
  scanf("%d\n",&num);
  n=num;
  while(n>0)
  {
     d=n%10;
     count++; 
     n=n/10;
  }
  printf("%d",count);
   return 0;
}
