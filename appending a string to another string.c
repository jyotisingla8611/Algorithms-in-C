#include<stdio.h>
void main()
{
    char str1[100],str2[100];
    int i=0,j=0;
    printf("\nEnter string 1:");
    gets(str1);
    printf("\nEnter string 2:");
    gets(str2);
    while(str2[i]!='\0')
        i++;
    while(str1[j]!='\0')
    {
        str2[i]=str1[j];
        i++;
        j++;
    }
    str2[i]='\0';
    printf("\n the appended string is :");
    puts(str2);

}
