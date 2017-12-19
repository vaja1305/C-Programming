#include <stdio.h>
int main() {
	int n;
	scanf("%d\n",&n);
	if(n<0)
	{
	    printf("negative");
	}
	else if(n==0)
	{
	    printf("zero");
	}
	else
	{
	    printf("positive");
	}
	return 0;
}
