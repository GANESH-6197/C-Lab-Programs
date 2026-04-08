#include<stdio.h>
int main(){
int a=0,b=1,c,i,n;
printf("enter number of terms: ");
scanf("%d",&n);
printf("fibonacci series: ");
for(i=1;i<=n;i++)
{
printf("%d",a);
c=a+b;
a=b;
b=c;
}
printf("\n\n             -25331A05D2");
return 0;
}
