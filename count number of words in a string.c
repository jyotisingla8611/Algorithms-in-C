#include<stdio.h>
void main()
{
    char str[100];
    int i=0,count=0,count1=0,flag;
    printf("Enter a string : ");
    gets(str);
    puts(str);
    //str[i]='\0';
    while(str[i]!='\0')
    {
        if(str[0]==' ')
        {
         if(str[i]==' ')
           {
            count++;
            flag=0;
           }
        }
        else
        {
            if(str[i]==' ')
            {
                count1++;
                flag=1;
            }
        }
        i++;
    }
    if(flag=1)
    printf("%d",count1+1);
    if(flag=0)
    printf("%d",count);
}
