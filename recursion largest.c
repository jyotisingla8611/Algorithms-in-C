#include<stdio.h>
int largest(int arr[],int size);
void main()
{
    int arr[19],size,i,result;
    printf("enter size : ");
    scanf("%d",&size);
    printf("\nEnter elements of array :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    result=largest(arr,size);
    printf("\nLARGEST = %d",result);
}
int largest(int arr[],int size)
{
    int i=0,large=0;

    if(i<size)
    {
        //large = arr[i];
        if(large<arr[])
        {
            large==arr[i];
        }
        i++;

        largest(arr,size);

    }
    return large;
}

