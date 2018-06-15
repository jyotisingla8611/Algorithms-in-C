#include<stdio.h>
typedef struct
{
    int hr;
    int min;
    int sec;
}TIME;
TIME add(TIME,TIME);
TIME sub(TIME,TIME);
TIME t1,t2,t3,t4;
void main()
{
    int opt;
    printf("Enter the option :\n 1.Add\n 2.Sub\n");
    scanf("%d",&opt);
    printf("Enter frst TIME in hr and then in mins and then in secs : \n");
    scanf("%d%d%d",&t1.hr,&t1.min,&t1.sec);
    printf("Enter second TIME in hr and then in mins and then in secs :  \n");
    scanf("%d%d%d",&t2.hr,&t2.min,&t2.sec);
    switch(opt)
    {
    case 1:
        t3=add(t1,t2);
        printf("Sum of TIMEs is %d hrs and %d mins %d sec",t3.hr,t3.min,t3.sec);
        break;
    case 2:
        t4=sub(t1,t2);
        printf("Sub of TIMEs is %d hrs and %d mins %d sec",t4.hr,t4.min,t4.sec);
        break;
    default :
        printf("Not a option");
    }
}
TIME add(TIME t1,TIME t2)
{
    TIME sum,x;
    sum.hr=t1.hr+t2.hr;
    sum.min=t1.min+t2.min;
    sum.sec=t1.sec+t2.sec;
    x.min=sum.min;
    if(sum.min>=60)
    {
        sum.min=sum.min%60;
        sum.hr=sum.hr+(x.min/60);
    }
    return sum;
}
TIME sub(TIME t1,TIME t2)
{
    TIME sub,x;
    if(t1.hr>t2.hr && t1.min>t2.min)
    {
      sub.hr=t1.hr-t2.hr;
      sub.min=t1.min-t2.min;
      sub.sec=t1.sec-t2.sec;
    }
    else
    {
      sub.hr=t2.hr-t1.hr;
      sub.min=t2.min-t1.min;
      sub.sec=t2.sec-t1.sec;
    }
    return sub;
}

