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
printf("\n The array after insertion");

for(i=0;i<size+1;i++)
{
    a[size]=num;
    printf("\t%d",a[i]);
}
}
