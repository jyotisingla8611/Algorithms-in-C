#include<stdio.h>
void main()
{
    int a,i,b,count=0;
    printf("value of a");
    scanf("%d",&a);
    b=1<<31;
    for(i=0;i<=32;i++)
    {
        if((a<<i)&b)
        {
            break;
        }
        count++;
    }
    printf("Total number of leading zeros in %d is %d.", a, count);

}
