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
printf("enter the num to be inserted=");
scanf("%d",&num);
printf("enter the position where to be inserted=");
scanf("%d",&pos);
for(i=size-1;i>=pos;i--)
{
    a[i+1]=a[i];
}
    a[pos]=num;
printf("\n The array after insertion");
for(i=0;i<size+1;i++)
    printf("\t%d",a[i]);
}
