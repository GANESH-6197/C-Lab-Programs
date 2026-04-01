#include<stdio.h>
int main()
{
int a[10],i,n,sum=0;
printf("enter number of elements:");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum=%d",sum);
return 0;
}
