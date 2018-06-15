#include<stdio.h>
void prime(int *,int *);
int main()
{
    int a,b ;
    printf("enter two nums");
    scanf("%d%d",&a,&b);
    prime(&a,&b);
    return 0;
}
void prime(int *x, int *y)
{
    int i,j;
    for(i=*x;i<=*y;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i == j)
            printf("%d\n",i);
    }
}
