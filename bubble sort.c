#include<stdio.h>
void main()
{
    int a[100],i,c,j,n;
    printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
  {
      for(j=0;j<n-1;j++)
      {
          if(a[j]<a[j+1])
          {
              c=a[j];
              a[j]=a[j+1];
              a[j+1]=c;
          }
      }
  }
  printf("\n SORTED ARRAY IS ");
  for(i=0;i<n;i++)
    printf("\n %d",a[i]);
}
