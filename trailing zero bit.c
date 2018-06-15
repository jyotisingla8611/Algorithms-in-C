#include<stdio.h>
void main()
{
    int a,i,count=0;
    printf("value of a");
    scanf("%d",&a);
    for(i=31;i>=0;i--)
    {
        if((a>>i)&1)
        {
            break;
        }
        count++;
    }
    printf("Total number of trailing zeros in %d is %d.", a, count);

}
