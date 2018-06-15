#include<stdio.h>
void main()
{
    int a[2][2][2]={(1,2,3,4),(5,6,7,8)};
    int(*p)[2][2];
    int i,j,k;
    p=a;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("\n%d",*(*(p+i)+j+k));
            }
        }
    }
}
