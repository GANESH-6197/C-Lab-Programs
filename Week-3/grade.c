#include<stdio.h>
int main(){
int a;
	printf("enter your marks\n");
	scanf("%d",&a);
	if(a>=90){
	printf("your grade is a\n");
	}else if(a>=80){
	printf("your grade is b\n");
	}else if(a>=65){
	printf("your grade is c\n");
	}else{
	printf("you are a fail in exam");
	}
	return 0;
	}
