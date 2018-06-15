#include<stdio.h>
void main()
{
    int arr[50],i,j,size;
    printf("Enter size : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=size-1;i>=0;i--)
    {
        printf("%d \t",arr[i]);
    }
}
