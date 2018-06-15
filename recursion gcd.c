#include<stdio.h>
int gcd(int ,int);
void main()
{
int n,n1,res;
scanf("%d%d",&n,&n1);
res=gcd(n,n1);
printf(" %d is gcd ",res);
}
int gcd (int n,int n1)
{
    int rem;
    rem=n%n1;
    if(rem==0)
     return n1;
    if(rem!=0)
        return(gcd(n1,rem));
}
