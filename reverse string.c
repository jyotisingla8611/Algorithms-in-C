#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,j;
    printf("Enter sytring : ");
    gets(str);
    puts(str);
    j=strlen(str);
    for(i=j;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
