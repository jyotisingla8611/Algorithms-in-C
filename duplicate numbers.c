
#include<stdio.h>
#include<math.h>
void main()
{
    int num[10],j,i,num_dig;
    printf("enter number of digits");
    scanf("%d",&num_dig);
    for(i=0;i<num_dig;i++)
    {
        printf("\nenter %d digit   ",i);
        scanf("%d",&num[i]);
    }
for(i=0;i<num_dig;i++)
{
    for(j=1;j<num_dig -1 ;j++)
    {
        if(num[i] == num [j]&& i!=j)
            printf("\n duplicate number is found at %d and %d",i,j);
    }
}
printf("\n no Duplicacy");
}
