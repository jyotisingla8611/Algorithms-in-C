#include<stdio.h>
void main()
{
    char str[100],upper_str[100];
    int i=0,j=0;
     printf("\n enter any string:");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>=97&&str[i]<=122)
            upper_str[j]=str[i]-32;
        else
            upper_str[j]=str[i];
        i++;
        j++;
    }
    upper_str[j]='\0';
    printf("\n the string in upper case if :");
    puts(upper_str);
}
