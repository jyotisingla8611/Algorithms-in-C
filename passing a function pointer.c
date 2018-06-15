#include<stdio.h>
int operate(int(*fp)(int,int),int,int);
int add(int a,int b);
int sub(int a,int b);
main()
{
    int result;
    result=operate(add,10,20);
    printf("addition = %d\n",result);
    result=operate(sub,20,10);
    printf("\nsubtraction = %d\n",result);
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int operate(int(*fp)(int,int),int a,int b)
{
    int result;
    result=(*fp)(a,b);
    return result;
}
