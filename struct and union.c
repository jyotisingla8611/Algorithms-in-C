#include<stdio.h>
struct POINT1
{
    int a,b;
};
union POINT2
{
    int a,b;
};
int main()
{
    //POINT1 p1={2,3};
   //union POINT2 p2={4,5};//this is not preferred
   struct POINT1 p1;
    p1.a=3;
    p1.b=2;
    union POINT2 p2;
    p2.a=6;
    printf("Coordinates are %d",p2.a);
    p2.b=7;
    printf(" %d  \n",p2.b);
    printf("Coordinates are %d %d \n",p1.a,p1.b);

}
