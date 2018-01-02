#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    if(n>=0 && n<=100000)
    {
        printf("yes\n");
        printf("given string is numeric");
    }
	return 0;
}
