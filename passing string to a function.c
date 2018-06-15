#include<stdio.h>
void display(char s[]);
void main()
{
    char s[30];
    printf("\n enter the string");
    gets(s);
    display(s);
}
void display(char s[])
{
    printf("\n string is :");
    puts(s);
}
