#include<stdio.h>
void main()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int i,x,flag=1;
    printf("enter number to be searched");
    scanf("%d",&x);
    for(i=0;i<11;i++)
    {
        if(a[i]==x)
        {
            flag=1;
            printf("\n %d is found",i);
            break;
        }
    }
    if(flag==0)
        {
           printf("NOT FOUND");
        }
}
