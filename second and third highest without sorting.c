#include<stdio.h>
void main()
{
    int arr[100],size,i,second_large,third_large,large;
    printf("Enter size of an array : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    second_large=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>second_large && arr[i]!=large)
        {
            second_large=arr[i];
        }
    }
    third_large=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>third_large && arr[i]!=large && arr[i]!=second_large)
        {
            third_large=arr[i];
        }
    }
    printf("%d is largest \n",large);
    printf("%d is second largest \n",second_large);
    printf("%d is third largest \n",third_large);
}
