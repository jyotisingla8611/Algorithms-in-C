#include<stdio.h>
void main()
{
int *ptr=(int*)1000;
printf("old value =%d\n",ptr);
ptr=ptr+3;
printf("new value =%d\n",ptr);
}
