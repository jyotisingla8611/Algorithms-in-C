#include<stdio.h>
int digs(int);
void main()
{
    int n,c;
    printf("Enter a number : ");
    scanf("%d",&n);
    c=digs(n);
    printf("sum of digits is %d",c);
}
int digs(int n)
{
    if (n != 0)
    {
        return (n % 10 +digs (n / 10));
    }
    else
    {
       return 0;
    }
}
