#include<stdio.h>
void main()
{
    int arr[100],i,size,min,max;
    printf("Enter size of array : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("MIN : %d \t MAX : %d",min,max);
}
