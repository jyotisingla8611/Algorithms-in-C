#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int (*fp)(int,int);
main()
{
    fp=add;
    (*fp)(10,20);
    fp=sub;
    fp(20,10);
}
int add(int a,int b)
{
    int c;
    c=a+b;
    printf("%d is sum\n\n",c);
    return 0;
}
int sub(int a,int b)
{
    int c;
    c=a-b;
    printf("%d is sub",c);
    return 0;
}
