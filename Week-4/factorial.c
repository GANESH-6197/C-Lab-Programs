#include<stdio.h>
int main(){
int i,factorial=1;
printf("enter a number");
scanf("%d",&i);
while(i>0){
factorial=factorial*i;
i--;
}
printf("factorial=%d\n",factorial);
return 0;
}
