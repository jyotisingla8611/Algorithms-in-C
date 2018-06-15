#include<stdio.h>
int nat(int,int);
void main()
{
    int i,c,n=1,x;
    printf("number of nat nums : ");
    scanf("%d",&x);
    c=nat(n,x);
    printf(" %d ",c);

}
int nat(int n,int x)
{
    if(n==x)
        return x;
    else
    printf("%d\t",n);
        return nat((n+1),x);
}
