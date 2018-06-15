#include<stdio.h>
int sum(int);
void main()
{
    int n,c;
    printf("Enter a number : ");
    scanf("%d",&n);
    c=sum(n);
    printf("sum of digits is %d",c);
}
int sum(int n)
{
    if (n != 0)
    {
        return (n +sum (n-1));
    }
    else
    {
       return 0;
    }
}
