#include<stdio.h>
void insert(int a[],int x);
void main()
{
 int a[21];
 int i,x,n=5;
 printf("enter the elements of array : ");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 printf("enter the num to be inserted : ");
 scanf("%d",&x);
 insert(a,x);
}
void insert(int *a,int x)
{
    int i,j,temp;
    for(j=0;j<6;j++)
    {
        a[5]=x;
        printf("\t %d",a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=a[i];
        }
        printf("\t %d",a[i]);
    }
}
