#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i=0,j;
    printf("Enter the string: ");
    gets(str);
     puts(str);
     j=strlen(str);
     str[j+1]='\0';
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i=i+2;
    }

}
