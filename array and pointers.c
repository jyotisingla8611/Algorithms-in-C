#include<stdio.h>
void main()
{
    int a[5],i;
    int *p;
    p=&a[0];
    for(i=0;i<4;i++)
    scanf("%d",(p+i));
    for(i=0;i<4;i++)
        printf("%d ",*(p+i));
}
