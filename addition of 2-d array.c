#include<stdio.h>
void main()
{
int a[3][3];
int b[3][3];
int c[3][3];
int i,j;
printf("enter the elements of array a: \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
    scanf("%d",&a[i][j]);
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
    printf("a[%d][%d]=%d\t",i,j,a[i][j]);

    }
    printf("\n");
}

printf("enter the elements of array b: \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {

    scanf("%d",&b[i][j]);
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
    printf("b[%d][%d]=%d\t",i,j,b[i][j]);

    }
    printf("\n");
}

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        printf("\t %d",c[i][j]);
    }
    printf("\n");
}


}
