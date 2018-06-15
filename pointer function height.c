#include<stdio.h>
typedef struct
{
    int feet,inch;
} HEIGHT;
HEIGHT h1,h2,h3,h4;
HEIGHT add(HEIGHT ,HEIGHT );
HEIGHT sub(HEIGHT ,HEIGHT );
void main()
{
    printf(" Enter height 1 : ");
    scanf("%d%d",&h1.feet,&h1.inch);
    printf(" Enter height 2 : ");
    scanf("%d%d",&h2.feet,&h2.inch);
    h3=add(h1,h2);
    printf("%d feet %d inch is sum ",h3.feet,h3.inch);
    h4=sub(h1,h2);
    printf("\n%d feet %d inch is sub ",h4.feet,h4.inch);
}
HEIGHT add(HEIGHT h1,HEIGHT h2)
{
    HEIGHT sum;
    sum.inch=h1.inch+h2.inch;
    while(sum.inch>12)
    {
        sum.inch -=12;
        sum.feet++;
    }
    sum.feet+=h1.feet+h2.feet;
    return sum;
}
HEIGHT sub(HEIGHT h1,HEIGHT h2)
{
    HEIGHT sub;
    if(h1.feet>h2.feet)
    {
        if(h1.inch<h2.inch)
            {
                h1.inch+=12;
                h1.feet--;
            }
            sub.inch=h1.inch-h2.inch;
            sub.feet=h1.feet-h2.feet;
        }
        else
        {
            if(h2.inch<h1.inch)
            {
              h2.inch+=12;
              h2.feet--;
            }
            sub.inch=h2.inch-h1.inch;

            sub.feet=h2.feet-h1.feet;
        }

        return sub;
    }

