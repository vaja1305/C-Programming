#include <stdio.h>
int main() 
{
	int mins[2],hour[2],min,hr,i;
	for(i=0;i<2;i++)
	{
	scanf("%d %d",&hour[i],&mins[i]);
	}
    hr=hour[0]-hour[1];
	min=mins[0]-mins[1];
	printf("%d %d",hr,min);
	return 0;
}
