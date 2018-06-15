#include<stdio.h>
#include<conio.h>
int main()
{
char a;
printf(" enter a char = ");
scanf("%c",&a);
printf("char is %c\n",a);
if(65>=a&&a<=91)
{
   printf("lower char is %c\n",32+'A');

}
else
{
    printf("upper char is %c\n",'a'-32);
}

return 0;
}
