#include<stdio.h>
int *area(int,int);
void main()
{
int *a,b,l;
printf(" enter value of sides ");
scanf("%d%d",&l,&b);
a=area(l,b);
printf("area is %d",*a);
}
int area(int x,int y)
{
int t;
t=x * y ;
return &t;
}
