#include<stdio.h>
void main()
{
    int i,j,a=64;
    for(i=1;i<=5;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
        if(i%2!=0)
            printf("*");
        else
                printf("%c",a+j);
        }
    }
    for(i=4;i>=1;i--)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
        if(i%2!=0)
            printf("*");
        else
                printf("%c",a+j);
        }
    }
}
