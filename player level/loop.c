#include<stdio.h>
void main()
{
int n=4;
int a;
int sum=0,temp=0;
int i;
scanf("%d",&a);
for(i=0;i<n;i++)
{
    sum=(sum*10)+a;
    temp=temp+sum;
}
printf("%d",temp);
}
