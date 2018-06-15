#include<stdio.h>
#define MAX 5
int main()
{
    int arr[MAX],i,large,pos;
    for(i=0;i<MAX;i++)
    {
       printf("\n arr[%d] = ",i);
     scanf("%d",&arr[i]);
    }
    printf("\n The Contents of the array are :\n");
    for(i=0;i<MAX;i++)
    {
        printf(" %d ",arr[i]);
    }
    int second_large;
    large=arr[0];
    for(i=0;i<MAX;i++)
    {
        if(arr[i]>large)
        {
            second_large=large;
            large=arr[i];
        }
        else if(arr[i]>second_large)
        {
            second_large=arr[i];
        }
    }
    printf("\nthe largest number is %d\n",large);
     printf("\nthe second largest number is %d",second_large);
 return 0;
}
