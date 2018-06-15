#include<stdio.h>
void main()
{
    int fact=1,i,j,size,arr[50];
    printf("enter size of array: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Factorial of elements is as :\n");
    for(i=0;i<size;i++)
    {
        for(j=arr[i];j>1;j--)
        {
            fact=fact*j;
        }
        printf("%d\n",fact);
        fact=1;
    }

}
