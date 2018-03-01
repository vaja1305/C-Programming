#include <stdio.h>
int main() 
{
    int a[10],k,temp=0,i=0,p,n,max=0;
	scanf("%d %d",&n,&p);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]>=max)
	   {
	       max=a[i];
	   }
	}
	temp=max;
	i=0;
    while(i<p)
	{
	    scanf("%d",&k);
	    if(k>=temp)
	    {
	        printf("%d ",k);
	    }
	    else
	    {
	        printf("%d ",temp);
	    }
	i++;
	} 
	return 0;
}
