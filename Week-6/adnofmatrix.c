#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10];
int i,j,rows,cols;
printf("enter the number of rows:\n");
scanf("%d",&rows);
printf("enter the number of columns:\n");
scanf("%d",&cols);
printf("the 1st  matrix elements:\n");
for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
scanf("%d",&a[i][j]);
}
}
printf("the 2nd matrix elements:\n");
for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
scanf("%d",&b[i][j]);
}
}
for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
c[i][j]=a[i][j]+b[i][j];
}
}
printf("the sum of two elements:\n");
for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
printf("%d",c[i][j]);
}
printf("\n");
}
return 0;
}
