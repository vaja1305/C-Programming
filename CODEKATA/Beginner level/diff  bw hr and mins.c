#include <stdio.h>
#include<math.h>
int main() 
{
	int mins[2],hour[2],min,hr,i;
	for(i=0;i<2;i++)
	{
	scanf("%d %d",&hour[i],&mins[i]);
	}
	for(i=0;i<2;i++)
	{
	    hr=hour[i]-hour[i+1];
	    min=mins[i]-mins[i+1];
	}
	printf("%d %d",hr,min);
	return 0;
}
