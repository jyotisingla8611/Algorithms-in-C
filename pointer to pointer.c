#include<stdio.h>
void main()
{
    int a=10;
    int *p;
    int **q;
    p=&a;
    q=&p;
    printf("%d",**q);
}
