#include<stdio.h>
void main()
{
int r,*R,*a;
printf("enter r ");
scanf("%d",&r);
R=&r;
*a=3.14*(*R)*(*R);
printf("%d is area",*a);
}
