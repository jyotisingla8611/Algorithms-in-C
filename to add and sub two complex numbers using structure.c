#include<stdio.h>
void main()
{
    struct complex{
    int real;
    int img;
    }c1,c2,sum,sub;
    printf("enter the required numbers : \n");
    scanf("%d%d%d%d",&c1.real,&c1.img,&c2.real,&c2.img);
    printf("First complex number is : %d + %d i\n",c1.real,c1.img);
    printf("Second complex number is : %d + %d i\n",c2.real,c2.img);
    sum.real=c1.real+c2.real;
    sum.img=c1.img+c2.img;
    sub.real=c1.real-c2.real;
    sub.img=c1.img-c2.img;
    printf("Sum is : %d + %d i\n",sum.real,sum.img);
    printf("Sub is : %d + %d i\n",sub.real,sub.img);
}
