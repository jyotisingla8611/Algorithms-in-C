#include<stdio.h>
int add(int,int);
int sub(int,int);
int(*fp[2])(int,int);
main()
{
    int result,a,b,i;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    fp[0]=add;
    fp[1]=sub;
    for(i=0;i<2;i++)
    {
        printf("\n%d\n",(*fp[i])(a,b));
    }
}
int add(int a,int b)
{
    return (a+b);
}
int sub(int a,int b)
{
    return (a-b);
}
