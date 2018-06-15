#include<stdio.h>
main()
{
    int a[5]={1,2,3,4,5};
    fun(a[3]);
    fun1(&a[3]);
}
void fun(int num)
{
    printf("%d",num);
}
void fun1(int num)
{
    printf("\n%d\n",num);
}
