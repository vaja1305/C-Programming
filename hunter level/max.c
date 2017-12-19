#include<stdio.h>
int max(int n1[],int n2);
void main()
{
int i,n;
int a[100];
int maxii;
printf("no.of elements in an array\n");
printf("Array\n");
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
maxii=max(a,n);
printf("%d\n",maxii);
}

int max(int n1[],int n2)
{
int maxi=0,i;
for(i=0;i<n2;i++)
{
if(maxi<n1[i])
{
 maxi=n1[i];   
}
}
return maxi;
}
