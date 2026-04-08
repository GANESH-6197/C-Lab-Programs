#include<stdio.h>
int main(){
int i;
printf("using continue:\n");
for(i=1;i<=10;i++)
{
if(i==5)
continue;
printf("%d",i);
}
printf("\n using break:\n");
for(i=1;i<=10;i++)
{
if(i==5)
break;
printf("%d",i);
}
printf("\n\n           -25331A05D2");
return 0;
}
