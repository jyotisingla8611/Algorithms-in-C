#include<stdio.h>
void main()
{
    int a,b,e,f,c,d,g,h;
    printf("enter value of a,b,e and f");
    scanf("%d %d %d %d",&a,&b,&e,&f);
    printf("value of a is %d\n value of b is %d\n value of d is %d\n value of d is %d\n\n",a,b,e,f);
    c=a&(1<<e);
    d=b&(1<<f);
    if(c==d)
    {
    printf("after swapping %d will become %d \n after swapping %d will become %d ",a,a,b,b);
    }
    else
    {
        g=a^(1<<e);
        h=b^(1<<f);
        printf("after swapping %d will become %d \n after swapping %d will become %d ",a,g,b,h);
    }

}
