#include<stdio.h>
void main()
{
    //char str[10]="HELLO";
    char *str="HELLO";
    char *pstr;
    pstr=str;
    printf("\n%c\n",*str);
    while(*pstr!='\0')
    {
        printf("%c",*pstr);
        pstr++;
    }
}
