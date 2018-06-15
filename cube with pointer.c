#include<stdio.h>
int cube(int *);
void main()
{
int a,b;
printf(" enter value of a ");
scanf("%d",&a);
b=cube(&a);
printf("cube is %d",b);
}
int cube(int *x)
{
int y;
y=*x * *x * *x;
return y;
}
