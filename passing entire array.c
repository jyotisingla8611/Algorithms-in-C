#include<stdio.h>
main()
{
    int a[5]={1,2,3,4,5};
    fun(a);
}
void fun(int a[])
{
    int i;
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);
}
