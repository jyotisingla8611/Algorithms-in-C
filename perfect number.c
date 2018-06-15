#include<stdio.h>
 int perfect(int *);
 void main()
 {
     int a,b;
     printf("enter value of a");
     scanf("%d",&a);
     printf("%d is value of a\n",a);
     b=perfect(&a);
    // printf("%d",b);
 }
 int perfect(int *x)
 {
     int sum=0,rem,result,b;
     b= *x;
     while(*x!=0)
     {
         rem=*x%10;
         sum=sum+rem;
         *x=*x/10;
     }
     printf("sum is %d\n",sum);
     if(sum==b)
        result = printf("perfect\n");
     else
        result =printf("not perfect");
     return result;
 }
