#include<stdio.h>
void main()
{
    int r,n,c,i,j,k,p1,p2,p3;
    printf("enter number of arrays");
    scanf("%d",&n);
    printf("\nenter number of rows");
    scanf("%d",&r);
    printf("\nenter number of cols");
    scanf("%d",&c);
     p1=n;p2=r; p3=c;
    int a[n][r][c];
    for(i=0;i<n;i++)
    {
        for(j=0;j<r;j++)
        {
            for(k=0;k<c;k++)
            {
                scanf("%d",&a[n][r][c]);

            }
        }
    }
    printf("%d",a[1][1][1]);
    for(i=0;i<p1;i++)

    {
        printf("\n");
        for(j=0;j<p2;j++)
        {
            printf("\n");
            for(k=0;k<p3;k++)
            {
                printf("\ta[%d][%d][%d]=%d",i,j,k,a[i][j][k]);

            }
        }
    }
}
