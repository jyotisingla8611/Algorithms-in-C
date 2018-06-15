#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,pos,size,num;
printf("\n Enter the  number of elements in a array");
scanf("%d",&size);
int a[size];
printf("\n Enter the array elements");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the position where to be deleted=");
scanf("%d",&pos);
for(i=pos;i<size-1;i++)
{
    a[i]=a[i+1];
}
printf("\n The array after detete");
for(i=0;i<size-1;i++)
    printf("\t%d",a[i]);
}
