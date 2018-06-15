#include<stdio.h>
int nat(int);
void main()
{
    int i,c,n=1;
    c=nat(n);
    printf(" %d ",c);

}
int nat(int n)
{
    if(n==50)
        return 50;
    else
    printf("%d\t",n);
        return nat(n+1);
}
