#include<stdio.h>
int fact(int n);
int main()
{
    int a,c;
    printf("Enter the number : ");
    scanf("%d",&a);
    c=fact(a);
    printf("\n THE FACTORIAL OF A NUMBER IS %d",c);
    return 0;
}
int fact(int n)
{
//    fact(n)=n*fact(n-1);
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
