#include<stdio.h>
int main(){
int a,b,choice;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("1.add\n.2.subtract\n.3.multiply\n.4.divide\n");
	printf("enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
        printf("result= %d\n",a+b);
	break;
	case 2:
	printf("result= %d\n",a-b);
	break;
	case 3:
	printf("result= %d\n",a*b);
	break;
	case 4:
	printf("result= %d\n",a/b);
	break;
	default:
	printf("invalid choice\n");
	}
	return 0;
	}
