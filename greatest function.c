#include<stdio.h>
int greatest(int x, int y);
int main()
{
int a,b,c;
printf("enter value of a");
scanf("%d",&a);
printf("enter value of b");
scanf("%d",&b);
c=greatest(a,b);
printf("greatest value is %d",c);
return 0;
}
int greatest(int x, int y)
{
int result;
if(x>y)
result = x;
else
result = y;
return result;
}
