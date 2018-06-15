#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
    int arr[MAX],i,small,small_pos,large,large_pos,c;
    for(i=0;i<MAX;i++)
    {
     printf("\n arr[%d] = ",i);
     scanf("%d",&arr[i]);
    }
    printf("\n The Contents of the array are :\n");
    for(i=0;i<MAX;i++)
    {
        printf("\nvalue of element at position %d is %d",i,arr[i]);
    }
    small=arr[0];
    small_pos=0;
    large=arr[0];
    large_pos=0;
    for(i=1;i<MAX;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
            small_pos=i;
        }
        if(arr[i]>large)
        {
            large=arr[i];
            large_pos=i;
        }
    }
    printf("\nsmallest of this number is %d\n",small);
     printf("\nlargest of this number is %d\n",large);
     c=arr[large_pos];
     arr[large_pos]=arr[small_pos];
     arr[small_pos]=c;
     printf("\n the new array is :");
     for(i=0;i<MAX;i++)
        printf("\n %d",arr[i]);
 return 0;
}
