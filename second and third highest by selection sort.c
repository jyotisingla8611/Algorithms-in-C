#include<stdio.h>
void main()
{
    int i,j,temp,loc,arr[20],size,min;
    printf("\n Enter size of array : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
        min=arr[i];
        loc=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                loc=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
    printf("\n The sorted array is as:");
    for(i=0;i<size;i++)
        printf("%d \t",arr[i]);
    printf("\n SECONG HIGHEST : %d",arr[size-2]);
    printf("\n THIRD HIGHEST : %d",arr[size-3]);
}
