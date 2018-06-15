#include<stdio.h>
void main()
{
    int arr[10],size,i,j,temp;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\nSorted array is :\n");
    for(j=0;j<size;j++)
    {
        for(i=0;i<size;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }

    }
    }
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
        printf("\n SECOND HIGHEST : %d",arr[size-2]);
        printf("\n THIRD HIGHEST : %d",arr[size-3]);
}
