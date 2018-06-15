#include<stdio.h>
int fibb(int n);
void main()
{
    int n,i,c;
    printf("enter the number of terms : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     c=fibb(i);
     printf("%d ",c);
    }
}
int fibb(int n)
{
   if(n==0)
    return 0;
   else if(n==1)
    return 1;
   else
    return (fibb(n-1)+fibb(n-2));
}
