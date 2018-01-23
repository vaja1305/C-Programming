#include<stdio.h>
#include<string.h>
int main() 
{
    char a[10];
    int i,n,x;        //char x;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    x=a[i]+3;           // x=(int)(a[i]+3);
	    printf("%c",x);
	}
	return 0;
}
