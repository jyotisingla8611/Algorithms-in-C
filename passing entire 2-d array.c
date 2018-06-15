#include<stdio.h>
void readarray(int a[2][2],int,int);
void displayarray(int a[2][2],int,int);
main()
{
    int a[2][2],r,c;
    printf("enter number of rows and cols");
    scanf("%d%d",&r,&c);
    readarray(a,r,c);
    displayarray(a,r,c);
}
void readarray(int a[2][2],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void displayarray(int a[2][2],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\n%d",a[i][j]);
        }
    }
}
