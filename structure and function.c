#include<stdio.h>
    typedef struct POINT
    {
      int x;
      int y;
    }POINT;
    void display(int,int);
    int main()
    {
        POINT p1={2,3};
        display(p1.x,p1.y);
        return 0;
    }
    void display(int a,int b)
    {
        printf("coordintes of point are %d %d",a,b);
    }
