#include<stdio.h>
#include<math.h>
void arm(int *);
int main()
{
    int a,b;
    printf("enter a number=");
    scanf("%d",&a);
    printf("number is %d\n",a);
    arm(&a);
    return 0;
}
void arm(int *x)
{
    int count=0,rem,b,sum=0,c,d;
    c=*x;
    while(*x !=0)
    {
    rem = (*x)%10;
    count=count+1;
    *x= (*x)/10;
    }
    printf("%d is number of digits\n",count);
    d=c;
    while(c !=0)
    {
     rem= c % 10;
    b=pow(rem,count);
        c/=10;
        sum = sum + b;
    }
    printf("sum is %d\n",sum);
    if(sum== d)
    printf("%d is armstrong",sum);
else
    printf("%d is not an armstrong\n",sum);


}
