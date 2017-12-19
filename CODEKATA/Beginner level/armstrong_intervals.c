#include <stdio.h>
#include<math.h>
int main() {
	int n1,i,sum=0,rem=0,count=0,num=0,temp=0;
	int n2,n;
	scanf("%d %d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
	    n=num=i;
	    while(num!=0)
	    {
	    temp=num%10;
	    count++;
	    num=num/10;
	    }
	    while(n!=0)
	    {
	        rem=n%10;
	        sum=sum+pow(rem,count);
	        n=n/10;
	    }
	    if(sum==i)
	    {
	        printf("%d",i);
	    }
	 }
	return 0;
}
