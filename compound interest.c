#include<stdio.h> 
#include<math.h> 
float ci(float *,float *,float *);   
int main()
 { 
float principle, rate, time,b;
printf("Enter Principle\n"); 
scanf("%f", &principle);
printf("Enter Rate of Interest\n"); 
scanf("%f", &rate); 
printf("Enter Time\n"); 
scanf("%f", &time);   
b=ci(&principle,&rate,&time);
printf("%f is compound",b);
      }
float ci(float *x,float *y,float *z)
{
    float amount;
    amount = (*x) * pow((1 + *y/100), *z); 
    return amount;
}
