#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,pos,size,num;
printf("\n Enter the  number of elements in a array");
scanf("%d",&size);
int a[size],j;
printf("\n Enter the array elements");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the element  to be deleted=");
scanf("%d",&num);
for(i=1;i<size;i++)
{
    if(a[i]==num)
    {
     for(j=i;j<size;j++)
            a[j]=a[j+1];
    }
}
printf("\n The array after detete");
for(i=0;i<size-1;i++)
    printf("\t%d",a[i]);
}
