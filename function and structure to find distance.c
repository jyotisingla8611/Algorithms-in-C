#include<stdio.h>
typedef struct
{
    int km;
    int met;
}DISTANCE;
DISTANCE add_dis(DISTANCE,DISTANCE);
DISTANCE sub_dis(DISTANCE,DISTANCE);
DISTANCE d1,d2,d3,d4;
void main()
{
    int opt;
    printf("Enter the option :\n 1.Add\n 2.Sub\n");
    scanf("%d",&opt);
    printf("Enter frst distance in km and then in metrs : \n");
    scanf("%d%d",&d1.km,&d1.met);
    printf("Enter second distance in km and then in metrs : \n");
    scanf("%d%d",&d2.km,&d2.met);
    switch(opt)
    {
    case 1:
        d3=add_dis(d1,d2);
        printf("Sum of distances is %d kms and %d metrs",d3.km,d3.met);
        break;
    case 2:
        d4=sub_dis(d1,d2);
        printf("Sub of distances is %d kms and %d metrs",d4.km,d4.met);
        break;
    default :
        printf("Not a option");
    }
}
DISTANCE add_dis(DISTANCE d1,DISTANCE d2)
{
    DISTANCE sum,x;
    sum.km=d1.km+d2.km;
    sum.met=d1.met+d2.met;
    x.met=sum.met;
    if(sum.met>=1000)
    {
        sum.met=sum.met%1000;
        sum.km=sum.km+(x.met/1000);
    }
    return sum;
}
DISTANCE sub_dis(DISTANCE d1,DISTANCE d2)
{
    DISTANCE sub,x;
    if(d1.km>d2.km && d1.met>d2.met)
    {
      sub.km=d1.km-d2.km;
      sub.met=d1.met-d2.met;
    }
    else
    {
      sub.km=d2.km-d1.km;
      sub.met=d2.met-d1.met;
    }
    return sub;
}

